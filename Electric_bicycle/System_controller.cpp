#include <iostream>
#include <windows.h>
#include "System_controller.h"
using namespace std;

// ������ ������
System_controller::System_controller() : check(1) {};
System_controller::System_controller(bool check) { this->check = check; };

// getter �Լ� ������
bool System_controller::get_check() { return check; }


// �Ϲ� �Լ� ������
void System_controller::system_start(string code) {
	
	string pw;

	cout << "=======================================\n\n";
	cout << "�ý��� ���� ��й�ȣ�� �Է����ּ��� \n\n";
	cout << "=======================================\n\n";
	cout << "PASSWORD : ";

	for (int i = 0; i < 5; i++) {
		
		cin >> pw;
		system("cls");

		if (code == pw){  // ��й�ȣ ��ġ�ϴ��� üũ
			for (int j = 0; j < 5; j++) {
				cout << "========================================================\n\n";
				cout << "��й�ȣ�� ��ġ�մϴ�.\n���α׷��� �����մϴ� ";
				
				for (int k = 0; k < j; k++) {
					cout << ".";
				}

				cout << "\n\n========================================================\n";
				Sleep(400);
				system("cls");
			}

			check = 0; // ��й�ȣ ��ġ �� check �� 0���� ����
			system("cls");
			break;
		}
		else {
			cout << "==================================================\n\n";
			cout << "��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n �ٽ� �Է����ּ���\n\n";
			cout << "==================================================\n\n";
			cout << "PASSWORD : ";
		}
	}
	if (check == 1) {
		system("cls");
		cout << "��й�ȣ�� 5ȸ Ʋ�Ƚ��ϴ�. �ٽ� �õ����ּ���.\n\n";
	}
}
void System_controller::system_end() {
	cout << "�ý����� �����մϴ�.\n";
}