#include <iostream>
#include "Electric_bicycle.h"
#include "System_controller.h"
using namespace std;

#define PASSWORD "123654" // �ý��� ���� ��й�ȣ

int main() {

	System_controller system_controller;
	Electric_bicycle electric_bicycle;

	system_controller.system_start(PASSWORD);

	if (system_controller.get_check() == 0) { 
		electric_bicycle.start_program(1);  // check �� 0 �Ͻ� Electric_bicycle Ŭ�������� ���α׷� �����Լ� ����
	}

	return 0;
}