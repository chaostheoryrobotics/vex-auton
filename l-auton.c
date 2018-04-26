task autonomous()
{
	if(SensorValue[leftSideAuton] == 1) {
		direction = -1;
	}
	else {
		direction = 1;
	}
	while(SensorValue[coneArm] < 65) {
		motor(chainArm) = 126;
	}
	motor(chainArm) = -15;
	wait1Msec(200);

	motor(chainArm) = 0;
	while (SensorValue[liftSensor] > -30){
		motor(topRight) = -67;
		motor(topLeft) = -67;
		motor(bottomLeft) = -67;
		motor(bottomRight) = -67;
	}

	motor(bottomLeft) = 5;
	motor(bottomRight) = 5;
	motor(topRight) = 5;
	motor(topLeft) = 5;
	wait1Msec(190);
	motor(bottomLeft) = 0;
	motor(bottomRight) = 0;
	motor(topRight) = 0;
	motor(topLeft) = 0;

	motor(chainArm) = -10;
	motor(topRight) = -10;
	motor(topLeft) = -10;
	motor(bottomLeft) = -10;
	motor(lift) = -97;
	wait1Msec(900);//lift the elevator while lowering the mogo
	motor(chainArm) = 0;
	motor(chainArm) = -10;
	motor(topRight) = -10;
	motor(topLeft) = -10;
	motor(bottomLeft) = -10;
	motor(fLbL) = 127;
	motor(fRbR) = 127;
	wait1Msec(2200);//drive forward
	motor(lift) = 87;
	motor(fLbL) = 0;
	motor(fRbR) = 0;
	wait1Msec(1500);//bring up lift
	motor(topRight) = 57;
	motor(topLeft) = 57;
	motor(bottomLeft) = 57;
	motor(bottomRight) = 57;
	wait1Msec(300);//lower the elevator
	//motor(topRight) = -25;
	//motor(topLeft) = -25;
	//motor(bottomLeft) = -25;
	//motor(bottomRight) = -25;
	motor(intake) = 100;
	wait1Msec(700);//back up while dropping the ball
	
	motor(lift) = -127;
	wait1Msec(600);
	
	motor(fLbL) = -127;
	motor(fRbR) = -127;
	motor(lift) = 0;
	motor(intake) = 0;
	wait1Msec(1000);
	//motor(fLbL) = -127;
	//motor(fRbR) = 127;
	//motor(intake) = 0;
	//wait1Msec(1000);//turn to line up with the pole
	//motor(fRbR && fLbL) = 127;
	//wait1Msec(700);
	//motor(topRight) = -37;
	//motor(topLeft) = -37;
	//motor(bottomLeft) = -37;
	//motor(bottomRight) = -37;
	//motor(lift) = -127;
	//wait1Msec(500);
	//motor(fLbL) = -67;
	//motor(fRbR) = -67;
	//motor(lift) = -127;
	//wait1Msec(550);


	//motor(topRight) = 0;
	//motor(topLeft) = 0;
	//motor(bottomLeft) = 0;
	//motor(bottomRight) = 0;
	//motor(fRbR && fLbL) = 0;
	//motor(chainArm) = 0;
	
	
	//motor(fLbL) = -127;
	//motor(fRbR) = -127;
	//wait1Msec(720);//go forward a bit
	//motor(fLbL) = -67 * direction;
	//motor(fRbR) = 67 * direction;
	//wait1Msec(600);//360 time
	//motor(fLbL) = 127;
	//motor(fRbR) = 127;
	//wait1Msec(1000);//into the 20

	////motor(topRight) = -25;
	////motor(topLeft) = -25;
	////motor(bottomLeft) = -25;
	////motor(bottomRight) = -25;
	//motor(lift) = -127;
	//wait1Msec(1600);//take the mogo down

	//motor(topRight) = -25;
	//motor(topLeft) = -25;
	//motor(bottomLeft) = -25;
	//motor(bottomRight) = -25;
	//motor(lift) = 0;
	//wait1Msec(350);

	//motor(topRight) = 0;
	//motor(topLeft) = 0;
	//motor(bottomLeft) = 0;
	//motor(bottomRight) = 0;
	//motor(fLbL) = -127;
	//motor(fRbR) = -127;
	//wait1Msec(500);//backup out of 20
}
