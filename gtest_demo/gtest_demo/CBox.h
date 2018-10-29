// CBox.h
#pragma once
#include <string.h>

//Box类的定义
class CBox
{
public:
    //构造函数
    CBox(double length_value, double width_value, double height_value);
    //默认构造函数
    CBox();
    //volume函数用于计算Box的体积
    double volume();

private:
    //Box的3个特性：长、宽、高
    double Length_of_box;
    double Width_of_box;
    double Height_of_box;
};