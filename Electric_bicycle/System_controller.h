#pragma once
#ifndef SYSTEM_CONTROLLER_H
#define SYSTEM_CONTROLLER_H
#include <string>


class System_controller {
private:
	bool check = 1; // �ʱ� �� 1, ���� == 0

public:
	// ������ �����
	System_controller();
	System_controller(bool check);

	// getter �Լ� �����
	bool get_check();

	// �Ϲ� �Լ� �����
	void system_start(std::string code);
	void system_end();
};

#endif // !SYSTEM_CONTROLLER_H
