#pragma once
#include "Parallelogram.h"

//������������� (������� a,c � b,d ������� �����, ��� ���� ����� 90);
class Rectangle : public Parallelogram {

public:
    FIGURE_LIB_API Rectangle(string name_, int side_a_, int side_b_);

};
