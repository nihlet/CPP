// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b;
	std::cout << "Hello world" << std::endl;
	// std::cin >> a;

	std::fstream f1;
	std::ifstream f2;
	std::ofstream f3;


	f2.open("hello.txt");

	if (!f2){	
		std::cout << "failed to open file";
		return 1;
	}

	f2 >> a;
	a += 12;
	std::cout << a << std::endl;

	if (!f2.eof()){
		f2 >> b;
		std::cout << b << std::endl;
	}

	int c;
	std::string d;
	int e, f;
	f2 >> c;
	f2 >> d;
	f2 >> e;
	f2 >> f;

	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << f << std::endl;

	char* cstr = new char[256];

	std::cout << f2.good() << " " << f2.eof() << " " << f2.fail() << " " << f2.bad() << std::endl;

	char temp;
	f2.get(temp);
	f2.get(cstr, 12);

	std::cout << f2.good() << " " << f2.eof() << " " << f2.fail() << " " << f2.bad() << std::endl;

	std::cout << (int)cstr[0] << (int)cstr[1] << std::endl;
	std::cout << std::string(cstr) << std::endl;


	f2.close();

	return 0;
}

