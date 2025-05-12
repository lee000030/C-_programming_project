#include "Speed.h"
#include "Gear.h"
#include <iostream>
using namespace std;

const int MAX[4] = { 10, 15, 20, 25 }; // �� ��� ���� �ְ�ӵ�

// ������ ������
Speed::Speed() { speed = 0; } // �ʱ� �� gas_pedal ���� (0)

// getter �Լ� ������
double Speed::get_speed() { return speed; };

// setter �Լ� ������
void Speed::set_speed(double speed, int check, int gear) { 
	if (check) { // check == 1 �̸� brake �۵�

		if (this->speed - speed < 0) { // speed�� ���� ��ų �� 0 ���� �۾��� �� ����ó��
			this->speed = 0;
		}
		else {
			this->speed -= speed;
		}
	} 
	else { // check == 0 �̸� gas_pedal �۵�
		if (this->speed + speed > MAX[gear - 1]) { // speed�� ���� ��Ű�� MAX �� ���� Ŀ�� �� ����ó��
			this->speed = MAX[gear - 1];
		}
		else {
			this->speed += speed;
		}
	} 
};
void Speed::engine_brake(double speed, int gear) {
	if (this->speed > MAX[gear - 1]) { // ���� �ӵ��� ���� ��� �ְ� �ӵ����� ������ ���� �극��ũ
		this->speed -= 0.04;
	}
}
void Speed::speed_reduction(Speed& speed) {
	// gas_pedal �۵� ���� �� �ڵ����� �ӵ� ���ݾ� ����
	speed.set_speed(0.001, 1, 0);
}