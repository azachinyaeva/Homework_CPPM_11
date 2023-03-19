#pragma once
#ifdef FIGUREDYNAMICLIB_EXPORTS
#define FIGURE_LIB_API __declspec(dllexport)
#else
#define FIGURE_LIB_API __declspec(dllimport)
#endif

#include <iostream>
using namespace std;

class Figure {

public:
    FIGURE_LIB_API Figure(string name_);
    
    FIGURE_LIB_API virtual void get_info();

private:
    string name;
};

FIGURE_LIB_API void print_object(Figure* figure);
