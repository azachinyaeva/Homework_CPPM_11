#pragma once
#include "Parallelogram.h"

//���� (��� ������� �����, ���� A,C � B,D ������� �����).
class Rhombus : public Parallelogram {

public:
    FIGURE_LIB_API Rhombus(string name_, int side_a_, int angle_A_, int angle_B_);

};