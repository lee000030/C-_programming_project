#include "Travel_distance.h"
#include "Speed.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

// ������ ������
Travel_distance::Travel_distance() { distance = 0; } // �ʱ� �Ÿ� 0 ����

// getter �Լ� ������
double Travel_distance::get_distance() { return distance; };

// setter �Լ� ������
void Travel_distance::set_distance() { // �̵��Ÿ� �ʱ�ȭ

	system("cls");

	cout << "�̵� �Ÿ��� �ʱ�ȭ�Ͻðھ��? (Y / N) >> ";
	string st; cin >> st;

	if (st == "Y") {
		system("cls");
		distance = 0;
		cout << "�̵��Ÿ��� �ʱ�ȭ�߽��ϴ�.\n";
		Sleep(1000);
		system("cls");
	}
}; 

// �Ϲ��Լ� ������
void Travel_distance::plus_distance(Speed& speed) {
	distance += speed.get_speed() * (0.1 / 3600.0); // �� ������ �̵��Ÿ� ���ؼ� distance�� ����
}