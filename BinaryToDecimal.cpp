
#include "pch.h"
#include <iostream>
#include <string.h>
using namespace std;
int i,num,length;

void toBinary(int*str, int num)
{
	int cash;

	if (num != 1 || num != 0)
	{
		for (i = 1; i < 50; i++)
		{
			cash = num % 2;
			str[i] = cash;
			num /= 2;
			if (num < 1)
				break;

		}
		length = i;
	}
	
}
int toDecimal(char*str,int length)
{
	
	
	double cash= 0;
	if (str[length-1] == '0') {
		int one = str[0];
		str[0] = str[length-1];
		str[length-1] = one;
	}
	for (i = 0; i < length; i++)
		
		if (str[i] == '1')
			cash += pow(2, i);
	return cash;

}
void Block1()
{
	cout << "Enter the number " << endl;
	cin >> num;
	unsigned int size = num / 2;
	int*str = new int[size];
	str[0] = 1;
	toBinary(str, num);
	cout << "In binary: ";
	for (i = 0; i < length; i++)
		cout << str[i];
	cout << endl;
	delete str;}
void Block2()
{
	char str[255];
	cout << "Enter binary code: ";
	gets_s(str);
	length = strlen(str);
	cout <<"Your number is: "<< toDecimal(str, length) << endl;
}

int main()
{
	while (true)
	{
		int k;
		cout << "choose operation:" << endl << "Press 1 (is Decimal to Binary)" << endl << "Press 2 (is Binary to Decimal)" << endl << "If you want to exit press 3" << endl;
		cin >> k;
		switch (k)
		{
		case 1: Block1();
			break;
		case 2: Block2();
			break;
		case 3: return 0;
		default:cout << "You got BAMBOOZLED " << endl;
		}
	}
	
	system("pause");
	
	
}

