#include <iostream>
#include "Greeter.h"

int main ()
{
	setlocale(LC_ALL, "Russian");
	std::string name;
	std::cout << "������� ���: ";
	std::cin >> name;
	Greeter human(name);
	std::cout << human.greet();
	return 0;
}