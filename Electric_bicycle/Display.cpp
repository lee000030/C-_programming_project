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

// 현재 속도 표시
void Display::show_all(double speed, double battery, int gear, double travel_distance) { 
	cout << "\033[14A";

	cout << "\033[2K\t\t\t*=============================================*\n";
	cout << "\033[2K\t\t\t|                                             |\n";
	cout << "\033[2K\t\t\t|\t\t 속도: " << fixed << setprecision(2) << speed << " km/h              |\n";
	cout << "\033[2K\t\t\t|\t\t 배터리: " << fixed << setprecision(2) << (int)battery << "%                  | \n";
	cout << "\033[2K\t\t\t|\t\t 기어: " << gear << "단                    | \n";
	cout << "\033[2K\t\t\t|\t\t 거리: " << fixed << setprecision(3) << travel_distance << " km               | \n";
	cout << "\033[2K\t\t\t|                                             |\n";
	cout << "\033[2K\t\t\t*=============================================*\n\n";
}

void Display::show_menu() {
	cout << "\033[2K악셀 / 빠른 악셀 : 윗 방향키, space\n";
	cout << "\033[2K브레이크 / 빠른브레이크 : 아래 방향키, Enter\n";
	cout << "\033[2K기어 올림 / 내림 : u, d\n";
	cout << "\033[2K이동거리 초기화 : i \n";
	cout << "\033[2K배터리 충전 : c | 전원 끄기 : Esc\n";
}