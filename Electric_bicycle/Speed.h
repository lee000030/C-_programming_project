#pragma once
#ifndef SPEED_H
#define SPEED_H

class Speed {
private:
	double speed;
public:
	// ������ �����
	Speed();

	// getter �Լ� �����
	double get_speed();
	
	// setter �Լ� �����
	void set_speed(double speed, int check, int gear); // check = 0 gas_pedal / check = 1 brake �۵�
	
	// �Ϲ��Լ� �����
	void engine_brake(double speed, int gear);
	void speed_reduction(Speed& speed);
};


#endif // !SPEED_H
