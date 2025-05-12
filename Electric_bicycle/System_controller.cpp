#include <iostream>
#include <windows.h>
#include "System_controller.h"
using namespace std;

// 생성자 구현부
System_controller::System_controller() : check(1) {};
System_controller::System_controller(bool check) { this->check = check; };

// getter 함수 구현부
bool System_controller::get_check() { return check; }


// 일반 함수 구현부
void System_controller::system_start(string code) {
	
	string pw;

	cout << "=======================================\n\n";
	cout << "시스템 시작 비밀번호를 입력해주세요 \n\n";
	cout << "=======================================\n\n";
	cout << "PASSWORD : ";

	for (int i = 0; i < 5; i++) {
		
		cin >> pw;
		system("cls");

		if (code == pw){  // 비밀번호 일치하는지 체크
			for (int j = 0; j < 5; j++) {
				cout << "========================================================\n\n";
				cout << "비밀번호가 일치합니다.\n프로그램을 시작합니다 ";
				
				for (int k = 0; k < j; k++) {
					cout << ".";
				}

				cout << "\n\n========================================================\n";
				Sleep(400);
				system("cls");
			}

			check = 0; // 비밀번호 일치 시 check 값 0으로 변경
			system("cls");
			break;
		}
		else {
			cout << "==================================================\n\n";
			cout << "비밀번호가 일치하지 않습니다.\n 다시 입력해주세요\n\n";
			cout << "==================================================\n\n";
			cout << "PASSWORD : ";
		}
	}
	if (check == 1) {
		system("cls");
		cout << "비밀번호를 5회 틀렸습니다. 다시 시도해주세요.\n\n";
	}
}
void System_controller::system_end() {
	cout << "시스템을 종료합니다.\n";
}