#include "Travel_distance.h"
#include "Speed.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

// 생성자 구현부
Travel_distance::Travel_distance() { distance = 0; } // 초기 거리 0 설정

// getter 함수 구현부
double Travel_distance::get_distance() { return distance; };

// setter 함수 구현부
void Travel_distance::set_distance() { // 이동거리 초기화

	system("cls");

	cout << "이동 거리를 초기화하시겠어요? (Y / N) >> ";
	string st; cin >> st;

	if (st == "Y") {
		system("cls");
		distance = 0;
		cout << "이동거리를 초기화했습니다.\n";
		Sleep(1000);
		system("cls");
	}
}; 

// 일반함수 구현부
void Travel_distance::plus_distance(Speed& speed) {
	distance += speed.get_speed() * (0.1 / 3600.0); // 초 단위로 이동거리 구해서 distance에 저장
}