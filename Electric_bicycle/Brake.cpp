#include "Brake.h"
#include <thread>
#include <chrono>
#include <iostream>
using namespace std;

// 일반 함수 구현부
void Brake::brake_speed(Speed& speed) {
	// 속도 감소
	speed.set_speed(0.05, 1, 0); // (속도, check 값(가스페달, 브레이크 확인))
	// brake 작동 시 기어 값 필요없음  = 0으로 설정
}
void Brake::brake_quick_speed(Speed& speed) {
	// 속도 빠르게 감소
	speed.set_speed(0.1, 1, 0); // (속도, check 값(가스페달, 브레이크 확인))
	// brake 작동 시 기어 값 필요없음  = 0으로 설정
}
