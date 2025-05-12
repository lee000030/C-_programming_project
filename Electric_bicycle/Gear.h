#pragma once
#ifndef GEAR_H
#define GEAR_H

class Gear {
private:
	int gear;
public:
	// 생성자 선언부
	Gear();

	// getter 함수 선언부
	int get_gear();
	// setter 함수 선언부
	void set_gear(int gear, int check);
};


#endif // !GEAR_H
