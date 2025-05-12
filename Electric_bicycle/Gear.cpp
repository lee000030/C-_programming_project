#include "Gear.h"
#include <iostream>
using namespace std;

// 생성자 구현부
Gear::Gear() { gear = 1; }; // gear 초기 값 항상 1로 설정

// setter 함수 구현부
int Gear::get_gear() { return gear; }

// getter 함수 구현부
void Gear::set_gear(int gear, int check) { 
	if (check == 0) { // check 값 0일 때 기어 감소
		if (this->gear - gear > 0) {
			this->gear -= gear;
		}
	}
	else { // check 값 0 아닐때 기어 증가
		if (this->gear + gear <= 4) {
			this->gear += gear;
		}
	}
}