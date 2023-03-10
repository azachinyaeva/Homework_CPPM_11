#pragma once

#ifndef LEAVER_VS_EXPORTS
#define LEAVER_LIB_API __declspec(dllexport)
#else	
#define LEAVER_LIB_API __declspec(dllimport)
#endif

#include <iostream>

 class Leaver {

	public:
		LEAVER_LIB_API Leaver(std::string name);
		LEAVER_LIB_API std::string leave();

	private:
		std::string name;
	};


