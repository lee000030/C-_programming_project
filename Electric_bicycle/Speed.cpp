#include "Speed.h"
#include "Gear.h"
#include <iostream>
using namespace std;

const int MAX[4] = { 10, 15, 20, 25 }; // 각 기어 별로 최고속도

// 생성자 구현부
Speed::Speed() { speed = 0; } // 초기 값 gas_pedal 실행 (0)

// getter 함수 구현부
double Speed::get_speed() { return speed; };

// setter 함수 구현부
void Speed::set_speed(double speed, int check, int gear) { 
	if (check) { // check == 1 이면 brake 작동

		if (this->speed - speed < 0) { // speed를 감소 시킬 때 0 보다 작아질 때 예외처리
			this->speed = 0;
		}
		else {
			this->speed -= speed;
		}
	} 
	else { // check == 0 이면 gas_pedal 작동
		if (this->speed + speed > MAX[gear - 1]) { // speed를 증가 시키면 MAX 값 보다 커질 때 예외처리
			this->speed = MAX[gear - 1];
		}
		else {
			this->speed += speed;
		}
	} 
};
void Speed::engine_brake(double speed, int gear) {
	if (this->speed > MAX[gear - 1]) { // 현재 속도가 현재 기어 최고 속도보다 높을때 엔진 브레이크
		this->speed -= 0.04;
	}
}
void Speed::speed_reduction(Speed& speed) {
	// gas_pedal 작동 안할 시 자동으로 속도 조금씩 감소
	speed.set_speed(0.001, 1, 0);
}