#pragma once
#ifndef GAS_PEDAL_H
#define GAS_PEDAL_H
#include "Speed.h"
#include "Gear.h"

class Gas_pedal : Speed {
private:
public:
	// 일반 함수 선언부
	void gas_pedal_speed(Speed& speed, Gear& gear);
	void gas_pedal_quick_speed(Speed& speed, Gear& gear);
};


#endif // !GAS_PEDAL_H
