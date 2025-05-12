#pragma once
#ifndef ELECTRIC_BICYCLE_H
#define ELECTRIC_BICYCLE_H

// 모든 클래스 저장 파일
// 모든 클래스 헤더파일 include
#include "Battery.h"
#include "Brake.h"
#include "Display.h"
#include "Gas_pedal.h"
#include "Gear.h"
#include "Speed.h"
#include "System_controller.h"
#include "Travel_distance.h"


class Electric_bicycle {
private:
	System_controller system_controller;
	Battery battery;
	Brake brake;
	Display display;
	Gas_pedal gas_pedal;
	Gear gear;
	Speed speed;
	Travel_distance travel_distance;

public:
	void start_program(int check);
	void user_input();
};

#endif // !ELECTRIC_BICYCLE_H

