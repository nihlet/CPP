// lab1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>

/*
	��������� ���������  ��  ����� ��++  ���  ����������  
	y ��� ����� ��������� �������� x.
	y = 3.1 x^3 + sqrt(x^2 + 9) - e^-x
*/

double y(double x)
{
	return  3.1 * pow(x, 3) + sqrt(pow(x, 2) + 9) - exp(-x);
}

int _tmain(int argc, _TCHAR* argv[])
{
	double x;
	std::cout << "x = ";
	std::cin >> x;
	std::cout << y(x) << std::endl;

	return 0;
}

