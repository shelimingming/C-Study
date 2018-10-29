//CBox.cpp
#include<iostream> 
#include"CBox.h"

using namespace std;

//构造函数定义，包含3个参数：
CBox::CBox(double length_value, double width_value, double height_value)
{
	cout << "Constructor called." << endl;
	Length_of_box = length_value;
	Width_of_box = width_value;
	Height_of_box = height_value;
}

//默认构造函数
CBox::CBox()
{
	cout << "Default constructor is called." << endl;
}


// 计算Box体积函数
double CBox::volume()
{
	return Length_of_box * Width_of_box * Height_of_box;
}