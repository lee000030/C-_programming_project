#pragma once
#ifndef GEAR_H
#define GEAR_H

class Gear {
private:
	int gear;
public:
	// ������ �����
	Gear();

	// getter �Լ� �����
	int get_gear();
	// setter �Լ� �����
	void set_gear(int gear, int check);
};


#endif // !GEAR_H
