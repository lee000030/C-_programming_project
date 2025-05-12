#include "Gas_pedal.h"
#include "Gear.h"
#include <thread>
#include <chrono>
#include <iostream>
using namespace std;

const int MAX[4] = { 10, 15, 20, 25 }; // �� ��� ���� �ְ�ӵ�

// �Ϲ� �Լ� ������
void Gas_pedal::gas_pedal_speed(Speed& speed, Gear& gear) {
	
	if (speed.get_speed() < MAX[gear.get_gear() - 1]) {
		speed.set_speed(0.04, 0, gear.get_gear()); // �ӵ� ����
	}
}
void Gas_pedal::gas_pedal_quick_speed(Speed& speed, Gear& gear) {

	if (speed.get_speed() < MAX[gear.get_gear() - 1]) {
		speed.set_speed(0.08, 0, gear.get_gear()); // ������ �ӵ� ����
	}
}