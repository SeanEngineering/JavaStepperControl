# JavaStepperControl

## Introduction
Java Stepper control using SpringBoot to send commands to a Grbl controller and record location using Mysql.
This program allows a user to repurpose a control board for a CNC or 3D printer by sending GCODE via a serial connection instead of using a standard motor driver.
Objectives match the Python stepper controller project.

- ✅ Identify Gcode command logic.
- ✅ Identify how to establish a serial communication to the controller.
- ✅ Identify how to send a command over the serial port.
- ✅ Convert Gcode to byte information.
- ✅ Create basic movement functions

## Writing custom GCODE to serial from memory saves.

- After executing a movement command, a G92 command should be sent to the machine once it has completed the movement.
e.g. If the origin is [X0 Y0], sending [G0 X10 Y10] followed by [G92 X10 Y10] will lock the machine at the [X10 y10] position. If the G92 code is not sent, the machine will move back to [X0 Y0] position.
- This tells the the machine that it is currently at the position.

## Additional
- This project is designed natively for apple silicone OSX.
- G21 - sets movement to metric
- G28 - Returns machine to zero point
- G4 - Select working datum

## Known Errors
- During real world testing, an error will generally lead to the JVM crashing.
