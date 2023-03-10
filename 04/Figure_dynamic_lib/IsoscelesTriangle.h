#pragma once
#include "Triangle.h"

class IsoscelesTriangle : public Triangle {

public:
    FIGURE_LIB_API IsoscelesTriangle(string name_, int side_a_, int side_c_,
        int angle_A_, int angle_C_);

};
