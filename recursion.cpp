﻿
#include "pch.h"
#include <iostream>
using namespace std;
int nom2(int);
int main()
{
	int n;
	cin >> n;
	cout << nom2(n) << endl;

	if (n < 0)
		cout << "no answer" << endl;
}
int nom2(int n)
{
	if (n == 0)
		return 1;
	else return  n * nom2(n - 1);
}


// нейминг функции nom2  не есть хорошо , непонятно что она делает по названию
