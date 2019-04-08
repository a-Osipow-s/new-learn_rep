// 345678.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	char line[20] =" (()()){}{{}}[()]" ;
	
	int basket = 0;
	for (int i = 0; i < 20; i++)
	{
		if (line[i] == ')') basket++;
		if (line[i] == '(') basket--;
		if (line[i] == ']') basket++;
		if (line[i] == '[') basket--;
		if (line[i] == '}') basket++;
		if (line[i] == '{') basket--;
	}
	if (basket > 0) cout << "net otkrivaushey skobki" << endl;
	if (basket < 0) cout << "net zakrivaushey skobki" << endl;
	if (basket == 0) cout << "pravilnaya rastanovka" << endl;

	return 0;
}
