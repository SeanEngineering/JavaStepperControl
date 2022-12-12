package io.nology.remotestepper.Positions;

import java.io.DataInputStream;
import java.io.DataOutput;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.List;
import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import jakarta.transaction.Transactional;
import gnu.io.NRSerialPort;


@Service
@Transactional
public class PositionService {
	
	@Autowired
	private PositionRepository repository;
	
	public String hello() {
		return "Hello world";
	}
	
	public List<Position> all() {
		return this.repository.findAll();
	}
	
	public void serial() {
			String port = "";
			for (String s:NRSerialPort.getAvailableSerialPorts()) {
				System.out.println("Available port: "+s);
				port = s;
			}
			int BaudRate = 115200;
			NRSerialPort serial = new NRSerialPort(port, BaudRate);
			serial.connect();
			DataInputStream ins = new DataInputStream(serial.getInputStream());
			DataOutputStream outs = new DataOutputStream(serial.getOutputStream());
			try{
				//while(ins.available()==0 && !Thread.interrupted());// wait for a byte
				while(!Thread.interrupted()) {// read all bytes
					if(ins.available()>0) {
						char b = ins.readChar();
						//outs.write((byte)b);
						System.out.print(b);
					}
			    		Thread.sleep(5);
				}
			}catch(Exception ex){
				ex.printStackTrace();
			}
			serial.disconnect();
//			SerialPort targetPort = SerialPort.getCommPort("tty.usbmodem7877B8B700181");
//			System.out.println(targetPort.getDescriptivePortName());
//			boolean portCheck = targetPort.openPort(10);
//			if (portCheck) {
//				System.out.println("Connection is now open");
//			} else {
//				System.out.println("Port could not be opened");
//			}
//			targetPort.closePort();
			
	}
	
	public Position create(ChangePositionDTO data) {
		Position newPosition = new Position(data.getX(), data.getY(), data.getZ(), 2000);
		this.repository.save(newPosition);
		return newPosition;
		
	}
	
	public Optional<Position> find(Long id) {
		return this.repository.findById(id);
	}
	
	public Optional<Position> findOne(Long positionId){
		return this.repository.findById(positionId);
	}
	
	private byte[] encodeToByte(String input) {
		return input.getBytes();
	}
	
	public boolean moveBy(ChangePositionDTO data, Long id) {
		Optional<Position> maybePosition = findOne(id);
		System.out.println(maybePosition);
		if (maybePosition.isEmpty()) {
			return false;
		}
		Position setPosition = maybePosition.get();
		
		setPosition.setX(setPosition.getX()+data.getX());
		setPosition.setY(setPosition.getY()+data.getY());
		setPosition.setZ(setPosition.getZ()+data.getZ());
		
		String textString = String.format("G92 X%.2f Y%.2f Z%.2f \n", setPosition.getX(), setPosition.getY(), setPosition.getZ());
		String port = "";
		for (String s:NRSerialPort.getAvailableSerialPorts()) {
			System.out.println("Available port: "+s);
			port = s;
		}
		int BaudRate = 115200;
		NRSerialPort serial = new NRSerialPort(port, BaudRate);
		serial.connect();
		DataInputStream ins = new DataInputStream(serial.getInputStream());
		DataOutputStream outs = new DataOutputStream(serial.getOutputStream());
		
		try {
			outs.write(encodeToByte("\r\n\r\n"));
			outs.write(encodeToByte("G90 G94\n"));
			outs.write(encodeToByte("G21\n"));
			outs.write(encodeToByte("G28 G91 Z0\n"));
			outs.write(encodeToByte("G90\n"));
			outs.write(encodeToByte("T1\n"));
			outs.write(encodeToByte("S22500 M3\n"));
			outs.write(encodeToByte("G54\n"));
			outs.write(encodeToByte("G0 X0 Y0\n"));
			outs.write(encodeToByte(textString));
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		serial.disconnect();
		this.repository.save(setPosition);
		
		return true;
	}

}
