#include <iostream>
#include "Electric_bicycle.h"
#include "System_controller.h"
using namespace std;

#define PASSWORD "123654" // 시스템 시작 비밀번호

int main() {

	System_controller system_controller;
	Electric_bicycle electric_bicycle;

	system_controller.system_start(PASSWORD);

	if (system_controller.get_check() == 0) { 
		electric_bicycle.start_program(1);  // check 값 0 일시 Electric_bicycle 클래스에서 프로그램 시작함수 실행
	}

	return 0;
}