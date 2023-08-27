#include <iostream>
#include "counter.h"


void count_class(Counter new_counter) {

	bool exit = false;
	while (!exit) {
		char input;

		std::cout << "������� �������('+', '-', '=' ��� 'x') : ";
		std::cin >> input;
		switch (input) {
		case '+':
			new_counter.add();
			break;
		case '-':
			new_counter.subtraction();
			break;
		case '=':
			new_counter.print_counter();
			break;
		case 'x':
			std::cout << "�� ��������!" << std::endl;
			exit = true;
			break;
		}
	}

}

int main() {
	setlocale(LC_ALL, "ru_RU");
	//Counter new_counter;

	std::cout << "�� ������ ������� ��������� �������� ��������? ������� yes ��� no: ";
	std::string question;
	std::cin >> question;

	if (question == "yes") {

		int x;
		std::cout << std::endl << "������� ��������� �������� ��������: ";
		std::cin >> x;
		Counter new_counter(x);
		//new_counter.set_start_int(x);
		count_class(new_counter);

	}
	else if (question == "no") {
		std::cout << "��������� �������� �������� ����������� �� ��������� (1)" << std::endl;
		Counter new_counter;
		count_class(new_counter);

	};

	return 0;
}