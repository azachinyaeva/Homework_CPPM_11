#pragma once
#include "IsoscelesTriangle.h"


//�������������� ����������� (��� ������� �����, ��� ���� ����� 60);
class EquilateralTriangle : public IsoscelesTriangle {

public:
    FIGURE_LIB_API EquilateralTriangle(string name_, int side_a_, int angle_A);

};
