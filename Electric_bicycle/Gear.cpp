#include "Gear.h"
#include <iostream>
using namespace std;

// ������ ������
Gear::Gear() { gear = 1; }; // gear �ʱ� �� �׻� 1�� ����

// setter �Լ� ������
int Gear::get_gear() { return gear; }

// getter �Լ� ������
void Gear::set_gear(int gear, int check) { 
	if (check == 0) { // check �� 0�� �� ��� ����
		if (this->gear - gear > 0) {
			this->gear -= gear;
		}
	}
	else { // check �� 0 �ƴҶ� ��� ����
		if (this->gear + gear <= 4) {
			this->gear += gear;
		}
	}
}