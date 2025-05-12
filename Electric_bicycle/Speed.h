#pragma once
#ifndef SPEED_H
#define SPEED_H

class Speed {
private:
	double speed;
public:
	// 생성자 선언부
	Speed();

	// getter 함수 선언부
	double get_speed();
	
	// setter 함수 선언부
	void set_speed(double speed, int check, int gear); // check = 0 gas_pedal / check = 1 brake 작동
	
	// 일반함수 선언부
	void engine_brake(double speed, int gear);
	void speed_reduction(Speed& speed);
};


#endif // !SPEED_H
