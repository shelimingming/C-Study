//CBox.cpp
#include<iostream> 
#include"CBox.h"

using namespace std;

//���캯�����壬����3��������
CBox::CBox(double length_value, double width_value, double height_value)
{
	cout << "Constructor called." << endl;
	Length_of_box = length_value;
	Width_of_box = width_value;
	Height_of_box = height_value;
}

//Ĭ�Ϲ��캯��
CBox::CBox()
{
	cout << "Default constructor is called." << endl;
}


// ����Box�������
double CBox::volume()
{
	return Length_of_box * Width_of_box * Height_of_box;
}