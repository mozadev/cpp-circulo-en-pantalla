// ConsoleApplication1.cpp : main project file.
/*
Implemente una función que permita intercambiar
dos variables de tal forma que la primera variable siempre sea menor que la segunda.*/

#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<iomanip>

using namespace std;
using namespace System;

void dibujacirculo(int &r,int &x, int &y)
{

	
	for (int i = 0; i <= 360; i++)

	{
		Console::SetCursorPosition(x, y);
		x = r*cos(i) + 40;
		y = r*sin(i) + 12;
		cout << "*";

	}


}

int main()
{
	int r=10 ;
	int x, y;
	dibujacirculo(r, x, y);
	_getch();

}
