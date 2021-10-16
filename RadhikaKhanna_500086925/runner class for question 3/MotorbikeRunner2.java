package com.in28minutes.oops;

public class MotorbikeRunner2 {

	public static void main(String[] args) {
		MotorBike honda=new MotorBike();
		MotorBike bullet=new MotorBike();
		
		bullet.start();
		honda.start();
		
		bullet.setSpeed(60);
		honda.setSpeed(80);
		

		bullet.decreaseSpeed(20);
		honda.increaseSpeed(200);
		
		System.out.println(bullet.getSpeed());
		System.out.println(honda.getSpeed());


	}

}
