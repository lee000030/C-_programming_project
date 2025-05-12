#pragma once
#ifndef TRAVEL_DISTANCE_H
#define TRAVEL_DISTANCE_H
#include "Speed.h"

class Travel_distance {
private:
	double distance;
public:
	// ������ �����
	Travel_distance();

	// getter �Լ� �����
	double get_distance();

	// setter �Լ� �����
	void set_distance();

	// �Ϲ��Լ� �����
	void plus_distance(Speed& speed);
};


#endif // !TRAVEL_DISTANCE_H
