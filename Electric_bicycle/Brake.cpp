#include "Brake.h"
#include <thread>
#include <chrono>
#include <iostream>
using namespace std;

// �Ϲ� �Լ� ������
void Brake::brake_speed(Speed& speed) {
	// �ӵ� ����
	speed.set_speed(0.05, 1, 0); // (�ӵ�, check ��(�������, �극��ũ Ȯ��))
	// brake �۵� �� ��� �� �ʿ����  = 0���� ����
}
void Brake::brake_quick_speed(Speed& speed) {
	// �ӵ� ������ ����
	speed.set_speed(0.1, 1, 0); // (�ӵ�, check ��(�������, �극��ũ Ȯ��))
	// brake �۵� �� ��� �� �ʿ����  = 0���� ����
}
