package com.in28minutes.oops;

public class Number {
	
	private int no1;
	private int no2;
	
	
	
	public int getNo1() {
		return no1;
	}

	public void setNo1(int no1) {
		this.no1 = no1;
	}

	public int getNo2() {
		return no2;
	}

	public void setNo2(int no2) {
		this.no2 = no2;
	}

	Number(int no1, int no2){
		this.no1=no1;
		this.no2=no2;
	}
	
	public int add() {
		return no1+no2;
	}

	public int multiply() {
		return no1*no2;
	}
	
	public void doubleValue() {
		this.no1=this.no1*2;
		this.no2=this.no2*2;
	}
}
