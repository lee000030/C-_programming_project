#pragma once
#ifndef BATTERY_H
#define BATTERY_H

class Battery {
private:
	double battery_num;
public:
	// ������ �����
	Battery();

	// getter �Լ� �����
	double get_battery_num();

	// �Ϲ� �Լ� �����
	void charge();
	void battery_num_decrease();
	void battery_check();
};


#endif // !BATTERY_H
