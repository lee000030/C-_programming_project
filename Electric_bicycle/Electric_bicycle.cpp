#include "Electric_bicycle.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
using namespace std;

int ON_OFF = 1; // ON_OFF 값 1 일시 프로그램 실행중, 0이면 종료 

void Electric_bicycle::user_input() {
	if (_kbhit()) { // 사용자가 키 입력시 루프 돌면서 바로 받기
		char ch = _getch();
		if (ch == 72) { // 악셀
			gas_pedal.gas_pedal_speed(speed, gear);
		}
		else if (ch == 32) { // 빠른 악셀
			gas_pedal.gas_pedal_quick_speed(speed, gear);
		}
		else if (ch == 80) { // 브레이크
			brake.brake_speed(speed);
		}
		else if (ch == 13) { // 급 브레이크
			brake.brake_quick_speed(speed);
		}
		else if (ch == 'i') { // 거리 초기화
			travel_distance.set_distance();
		}
		else if (ch == 'u') { // 기어 업
			gear.set_gear(1, 1);
		}
		else if (ch == 'd') { // 기어 다운
			gear.set_gear(1, 0);
		}
		else if (ch == 'c') { // 배터리 충전 (속도 0일때 동작)
			if (speed.get_speed() == 0) {
				battery.charge();
			}
			else {
				system("cls");
				cout << "먼저 기기를 정차시키세요.\n";
				Sleep(1000);
				system("cls");
			}
		}
		else if (ch == 27) { // 프로그램 종료 (속도 0일때 동작)
			if (speed.get_speed() == 0) {
				ON_OFF = 0;
			}
			else {
				system("cls");
				cout << "먼저 기기를 정차시키세요.\n";
				Sleep(1000);
				system("cls");
			}
		}
	}
	else { // 사용자 입력 없을 시 자동으로 속도 감속
		speed.speed_reduction(speed);
	}
	
}

void Electric_bicycle::start_program(int check) {
	if (check == 1) {
		while (1) {
			display.show_all(speed.get_speed(), battery.get_battery_num(), gear.get_gear(), travel_distance.get_distance()); // 계기판
			display.show_menu(); // 하단 부 키 입력 설명 메뉴
			user_input(); // 사용자 입력 받기

			if (ON_OFF == 0) break; // user_input 에서 프로그램 종료 명령 받았을 시 프로그램 종료

			battery.battery_num_decrease(); // 배터리 시간이 지남에 따라 감소
			travel_distance.plus_distance(speed); // 거리 증가
			speed.engine_brake(speed.get_speed(), gear.get_gear()); // 엔진 브레이크 체크
			battery.battery_check(); // 배터리가 0이 아닌지 체크
			Sleep(10); // 빠르게 프로그램 실행
		}
		cout << "프로그램을 종료합니다.";
	}
}