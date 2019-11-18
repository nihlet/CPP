// lab1.1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
#include <iomanip>      // std::setprecision
#include <limits>

/*
	y = 3.1 x^3 + sqrt(x^2 + 9) - e^-x

	Составьте программу, которая строит таблицу значений 
	функции. Количество строк в таблице n, начальное значение
	аргумента и шаг изменения аргумента step вводятся программистом.
	В каждой строке должно выводиться значение аргумента и
	соответствующее ему  значение  функции с 4 знаками после запятой.
	После таблицы в соответствие с номером варианта должно 
	быть выведено следующее:

	Максимальное значение среди значений функций, у 
	которых первая цифра дробной части равна 7 или 3.
*/

double y(double x)
{
	return  3.1 * pow(x, 3) + sqrt(pow(x, 2) + 9) - exp(-x);
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	double x0;
	double step;
	std::cout << "Write number of lines ";
	std::cin >> n;

	std::cout << "x0 = ";
	std::cin >> x0;

	std::cout << "step = ";
	std::cin >> step;

	std::cout << "n\tx\ty(x)\n";

	double x = x0;
	std::cout << std::fixed;

	double max = std::numeric_limits<double>::min();

	bool flag = false;

	for (int i = 1; i <= n; i++)
	{
		std::cout << i << '\t' << std::setprecision(4) << x 
			<< '\t' << std::setprecision(4) << y(x) << std::endl;

		int first_float = static_cast<int>(y(x) * 10) % 10;

		if (first_float == 7 || first_float == 3)
		{
			flag = true;
			if (y(x) > max)
				max = y(x);
		}
			

		x += step;
	}

	if (flag)
		std::cout << "Max of results with first decimal equal 7 or 3: "
			<< max << std::endl;
	else 
		std::cout << "There is no results with first decimal equal 7 or 3: " << std::endl;


	/*
	printf("n\tx\ty(x)\n");
	x = x0;
	for (int i = 1; i <= n; i++)
	{
		printf("%d\t%.4f\t%.4f\n", i, x, y(x));
		x += step;
	}
	*/
	


	return 0;
}

