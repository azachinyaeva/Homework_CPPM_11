#include <iostream>
#include "Leaver.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	std::string name;
	std::cout << "������� ���: ";
	std::cin >> name;
	Leaver human(name);
	std::cout << human.leave();
	return 0;
}