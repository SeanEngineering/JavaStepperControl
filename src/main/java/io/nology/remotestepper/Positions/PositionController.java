package io.nology.remotestepper.Positions;

import java.util.List;
import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.fazecast.jSerialComm.SerialPort;

import jakarta.validation.Valid;

@RestController
@RequestMapping("/position")
public class PositionController {
	@Autowired
	private PositionService service;
	
	@GetMapping
	public String test() {
		return this.service.hello();
	}
	
	@GetMapping("/all")
	public List<Position> history() {
		return this.service.all();
	}
	
	@GetMapping("/serial") 
	public void serial() {
		this.service.serial();
	}
	
	@PostMapping
	public ResponseEntity<Position> createPosition(@Valid @RequestBody ChangePositionDTO data) {
		Position createdPosition = this.service.create(data);
		
		return new ResponseEntity<Position>(createdPosition, HttpStatus.CREATED);
		
	}
	@PostMapping("/{id}")
	public ResponseEntity<Optional<Position>> updatePosition(@Valid @RequestBody ChangePositionDTO data, @PathVariable Long id) {
		boolean updatedPosition = this.service.moveBy(data, id);
		if (updatedPosition) {
			return new ResponseEntity<Optional<Position>>(this.service.find(id), HttpStatus.OK);
			
		}
		return new ResponseEntity<>(null, HttpStatus.NOT_FOUND);
		
		
		
	}
	
	@GetMapping("/{id}")
	public ResponseEntity<Position> getPosition(@PathVariable Long id) {
		Optional<Position> updatedPosition = this.service.find(id);
		if (updatedPosition.isPresent()) {
			return new ResponseEntity<Position>(updatedPosition.get(), HttpStatus.OK);
			
		}
		return new ResponseEntity<>(null, HttpStatus.NOT_FOUND);
		
		
		
	}

}
