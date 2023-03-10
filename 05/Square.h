#pragma once
#include "Rhombus.h"

//квадрат (все стороны равны, все углы равны 90);
class Square : public Rhombus {

public:
    FIGURE_LIB_API Square(string name_, int side_a_);

};
