#include "Battery.h"
#include<iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
using namespace std;


// ������ ������
Battery::Battery() { battery_num = 100; }

// getter �Լ� ������
double Battery::get_battery_num() { return battery_num; }

// �Ϲ� �Լ� ������
void Battery::charge() { // ���͸� ���� �Լ�
	
	system("cls");

	for (; battery_num <= 100; battery_num += 0.88) {
		cout << "���͸� ���� �� . . . " << battery_num << "%\n";
		
		for (int i = 0; i < 25; i++) { // ���͸��� 1/4 �� ����� ���� ���͸� �ܿ��� ��ŭ �� �� �׸�� ǥ��
			if (i < (int)battery_num / 4) cout << "�� ";
			else cout << "�� ";
		}
		
		cout << "\n\n���� ���� : Esc\n";
		if (_kbhit()) {
			char ch; ch = _getch();
			if (ch == 27) break;
		}
		Sleep(1000);
		system("cls");
	}

	cout << "���͸� ���� �Ϸ�";
	Sleep(2000);
	system("cls");
}
void Battery::battery_num_decrease() { // ���͸� �Ҹ� �Լ�
	battery_num -= 0.008;
	if (battery_num < 0) battery_num = 0;
}
void Battery::battery_check() {
	if (battery_num == 0) { // ���͸��� ������
		while (1) {
			system("cls");
			cout << "���͸��� �����մϴ�. ��⸦ �������ּ���. (c �Է�) ";
			
			if (_kbhit()) { // ����� �Է� �ޱ�
				char ch = _getch();
				if (ch == 'c' || ch == 'C') { // ����ڰ� c Ȥ�� C �Է½�
					charge(); // ���͸� ���� �Լ� ȣ��
					break;
				}
			}
			Sleep(500);
		}
	}
}