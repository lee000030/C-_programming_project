#include "Battery.h"
#include<iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
using namespace std;


// 생성자 구현부
Battery::Battery() { battery_num = 100; }

// getter 함수 구현부
double Battery::get_battery_num() { return battery_num; }

// 일반 함수 구현부
void Battery::charge() { // 배터리 충전 함수
	
	system("cls");

	for (; battery_num <= 100; battery_num += 0.88) {
		cout << "배터리 충전 중 . . . " << battery_num << "%\n";
		
		for (int i = 0; i < 25; i++) { // 배터리를 1/4 로 나누어서 현재 배터리 잔여량 만큼 꽉 찬 네모로 표시
			if (i < (int)battery_num / 4) cout << "■ ";
			else cout << "□ ";
		}
		
		cout << "\n\n충전 종료 : Esc\n";
		if (_kbhit()) {
			char ch; ch = _getch();
			if (ch == 27) break;
		}
		Sleep(1000);
		system("cls");
	}

	cout << "배터리 충전 완료";
	Sleep(2000);
	system("cls");
}
void Battery::battery_num_decrease() { // 배터리 소모 함수
	battery_num -= 0.008;
	if (battery_num < 0) battery_num = 0;
}
void Battery::battery_check() {
	if (battery_num == 0) { // 배터리가 없으면
		while (1) {
			system("cls");
			cout << "배터리가 부족합니다. 기기를 충전해주세요. (c 입력) ";
			
			if (_kbhit()) { // 사용자 입력 받기
				char ch = _getch();
				if (ch == 'c' || ch == 'C') { // 사용자가 c 혹은 C 입력시
					charge(); // 배터리 충전 함수 호출
					break;
				}
			}
			Sleep(500);
		}
	}
}