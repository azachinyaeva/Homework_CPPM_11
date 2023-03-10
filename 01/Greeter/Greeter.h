#pragma once
#include <iostream>

class Greeter {

public:
	Greeter(std::string name);
	std::string greet();

private:
	std::string name;
};
