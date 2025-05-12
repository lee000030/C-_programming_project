#pragma once
#ifndef SYSTEM_CONTROLLER_H
#define SYSTEM_CONTROLLER_H
#include <string>


class System_controller {
private:
	bool check = 1; // 초기 값 1, 실행 == 0

public:
	// 생성자 선언부
	System_controller();
	System_controller(bool check);

	// getter 함수 선언부
	bool get_check();

	// 일반 함수 선언부
	void system_start(std::string code);
	void system_end();
};

#endif // !SYSTEM_CONTROLLER_H
