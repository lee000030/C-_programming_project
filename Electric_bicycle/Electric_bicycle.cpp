#include "Electric_bicycle.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
using namespace std;

int ON_OFF = 1; // ON_OFF �� 1 �Ͻ� ���α׷� ������, 0�̸� ���� 

void Electric_bicycle::user_input() {
	if (_kbhit()) { // ����ڰ� Ű �Է½� ���� ���鼭 �ٷ� �ޱ�
		char ch = _getch();
		if (ch == 72) { // �Ǽ�
			gas_pedal.gas_pedal_speed(speed, gear);
		}
		else if (ch == 32) { // ���� �Ǽ�
			gas_pedal.gas_pedal_quick_speed(speed, gear);
		}
		else if (ch == 80) { // �극��ũ
			brake.brake_speed(speed);
		}
		else if (ch == 13) { // �� �극��ũ
			brake.brake_quick_speed(speed);
		}
		else if (ch == 'i') { // �Ÿ� �ʱ�ȭ
			travel_distance.set_distance();
		}
		else if (ch == 'u') { // ��� ��
			gear.set_gear(1, 1);
		}
		else if (ch == 'd') { // ��� �ٿ�
			gear.set_gear(1, 0);
		}
		else if (ch == 'c') { // ���͸� ���� (�ӵ� 0�϶� ����)
			if (speed.get_speed() == 0) {
				battery.charge();
			}
			else {
				system("cls");
				cout << "���� ��⸦ ������Ű����.\n";
				Sleep(1000);
				system("cls");
			}
		}
		else if (ch == 27) { // ���α׷� ���� (�ӵ� 0�϶� ����)
			if (speed.get_speed() == 0) {
				ON_OFF = 0;
			}
			else {
				system("cls");
				cout << "���� ��⸦ ������Ű����.\n";
				Sleep(1000);
				system("cls");
			}
		}
	}
	else { // ����� �Է� ���� �� �ڵ����� �ӵ� ����
		speed.speed_reduction(speed);
	}
	
}

void Electric_bicycle::start_program(int check) {
	if (check == 1) {
		while (1) {
			display.show_all(speed.get_speed(), battery.get_battery_num(), gear.get_gear(), travel_distance.get_distance()); // �����
			display.show_menu(); // �ϴ� �� Ű �Է� ���� �޴�
			user_input(); // ����� �Է� �ޱ�

			if (ON_OFF == 0) break; // user_input ���� ���α׷� ���� ��� �޾��� �� ���α׷� ����

			battery.battery_num_decrease(); // ���͸� �ð��� ������ ���� ����
			travel_distance.plus_distance(speed); // �Ÿ� ����
			speed.engine_brake(speed.get_speed(), gear.get_gear()); // ���� �극��ũ üũ
			battery.battery_check(); // ���͸��� 0�� �ƴ��� üũ
			Sleep(10); // ������ ���α׷� ����
		}
		cout << "���α׷��� �����մϴ�.";
	}
}