// binary and decimal systems.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

string in_binary(int);
int in_decimal(int);

int main()
{
	int num;
	cout<<"Choose a number system:1-decimal,2-binary"<<endl;
	int k;
	cin>>k;
	switch (k)
	{
	case 1:
	{
		cout<<"Insert the number"<<endl;
		cin>>num;
		cout<<"Your number in binary "<<in_binary(num)<<endl;
		return 0;
	} break;
	case 2:
	{
		cout<<"Insert the number in binary"<<endl;
		cin>>num;
		cout<<"Your number "<<in_decimal(num)<<endl;
		return 0;
	} break;
	}
	return 0;
}

string in_binary(int num)
{
	unsigned long long temp, a = 0;
	string str, result;
	while (num != 0)
	{
		temp = num;
		temp = temp / 2;
		a = num % 2;
		num = temp;
		str += to_string(a);
	}
	for (int i = str.length() - 1; i >= 0; i--)
	{
		result += str[i];
	}
	return result;
}

int in_decimal(int num)
{
	int a;
	int b = 0;
	int result = 0;
	while (num != 0)
	{
		a = num % 10;
		num = num / 10;
		if (b == 0)
			b = 1;
		if (b != 0)
			a *= b;
		result += a;
		b *= 2;
	}
	return result;
}