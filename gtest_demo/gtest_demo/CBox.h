// CBox.h
#pragma once
#include <string.h>

//Box��Ķ���
class CBox
{
public:
    //���캯��
    CBox(double length_value, double width_value, double height_value);
    //Ĭ�Ϲ��캯��
    CBox();
    //volume�������ڼ���Box�����
    double volume();

private:
    //Box��3�����ԣ���������
    double Length_of_box;
    double Width_of_box;
    double Height_of_box;
};