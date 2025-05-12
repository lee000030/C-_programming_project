#pragma once
#ifndef BATTERY_H
#define BATTERY_H

class Battery {
private:
	double battery_num;
public:
	// 생성자 선언부
	Battery();

	// getter 함수 선언부
	double get_battery_num();

	// 일반 함수 선언부
	void charge();
	void battery_num_decrease();
	void battery_check();
};


#endif // !BATTERY_H
