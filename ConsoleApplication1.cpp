// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	char str[100];
	cout << "Введите строку" << endl;
	gets_s(str);
	int n = strlen(str);
	int i, j, k, l, m,a,p;
	j = k = l = m = a=p=0;
	for (i = 0; i < n; i++) {
		if (str[i] == '(')
			j++;
		if (str[i] == ')')
			k++;
		if (str[i] == '{')
			l++;
		if (str[i] == '}')
			m++;
		if (str[i] == '[')
			a++;
		if (str[i] == ']')
			p++;
	}
	if (str[0] == ')' || str[0] == '}' ||str[0]==']') {
		cout << "Скобки расставлены неверно" << endl;
		exit(0);
	}
	if (str[n] == '(' || str[n] == '{'||str[n]=='[') {
		cout << "Скобки расставлены неверно" << endl;
		exit(0);
	}
	if (j == 0 && k == 0 && l == 0 && m == 0 && a==0 && p==0) {
		cout << "Скобок нет" << endl;
		exit(0);
	}
	if (j == k && l == m&&a==p)
		cout << "Скобки расcтавлены верно" << endl;
	else cout << "Скобки расcтавлены неверно" << endl;
}