#include "Display.h"
#include "Speed.h"
#include "Battery.h"
#include "Travel_distance.h"
#include "Gear.h"
#include <iostream>
#include <conio.h>
#include <thread>
#include <chrono>
#include <iomanip>
using namespace std;

// ���� �ӵ� ǥ��
void Display::show_all(double speed, double battery, int gear, double travel_distance) { 
	cout << "\033[14A";

	cout << "\033[2K\t\t\t*=============================================*\n";
	cout << "\033[2K\t\t\t|                                             |\n";
	cout << "\033[2K\t\t\t|\t\t �ӵ�: " << fixed << setprecision(2) << speed << " km/h              |\n";
	cout << "\033[2K\t\t\t|\t\t ���͸�: " << fixed << setprecision(2) << (int)battery << "%                  | \n";
	cout << "\033[2K\t\t\t|\t\t ���: " << gear << "��                    | \n";
	cout << "\033[2K\t\t\t|\t\t �Ÿ�: " << fixed << setprecision(3) << travel_distance << " km               | \n";
	cout << "\033[2K\t\t\t|                                             |\n";
	cout << "\033[2K\t\t\t*=============================================*\n\n";
}

void Display::show_menu() {
	cout << "\033[2K�Ǽ� / ���� �Ǽ� : �� ����Ű, space\n";
	cout << "\033[2K�극��ũ / �����극��ũ : �Ʒ� ����Ű, Enter\n";
	cout << "\033[2K��� �ø� / ���� : u, d\n";
	cout << "\033[2K�̵��Ÿ� �ʱ�ȭ : i \n";
	cout << "\033[2K���͸� ���� : c | ���� ���� : Esc\n";
}