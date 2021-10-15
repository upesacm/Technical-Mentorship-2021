package com.in28minutes.firstjavaproject;

public class multiplicationTable {
	void print(){
		print(5,1,10);
	}
	void print(int number){
		print(number,1,10);
	}

void print(int number, int from, int to){
	for(int i=from; i<=to; i++) {
		System.out.printf("%d*%d=%d",number,i,number*i).println();
	}
}
}
