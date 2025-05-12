#pragma once
#ifndef BRAKE_H
#define BRAKE_H
#include "Speed.h"

class Brake : Speed {
public:
	// 일반 함수 선언부
	void brake_speed(Speed& speed);
	void brake_quick_speed(Speed& speed);
};


#endif // !BRAKE_H
