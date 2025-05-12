#pragma once
#ifndef TRAVEL_DISTANCE_H
#define TRAVEL_DISTANCE_H
#include "Speed.h"

class Travel_distance {
private:
	double distance;
public:
	// 생성자 선언부
	Travel_distance();

	// getter 함수 선언부
	double get_distance();

	// setter 함수 선언부
	void set_distance();

	// 일반함수 선언부
	void plus_distance(Speed& speed);
};


#endif // !TRAVEL_DISTANCE_H
