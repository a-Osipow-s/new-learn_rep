﻿// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
int n = 1;
int fact = 1;
	int rekurcia228(int a) {
		fact *=  n;

		n++;
		if (n <= a) {
			
			return rekurcia228(a);
			
		}
		else return fact;
		
	}
	int main()
	{
		int a;
		cin >> a;
		 cout << rekurcia228(a);
			return 0;
	}
// выровнять отступы, почему fact объявлено глобально?
