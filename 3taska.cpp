#include "pch.h"
#include <iostream>
using namespace std;

void binary()
{
	int bin_size;
	double count = 0;
	cout << "size of binary array" << endl;
	cin >> bin_size;
	cout << "Your elements" << endl;
	int *array_bin = new int[bin_size];
	for (int i = 0; i < bin_size; i++)
	{
		cin >> array_bin[i];
	}
	int j = 0;
	for (int i = bin_size - 1; i >= 0; i--, j++)
	{
		if (array_bin[j] == 1)	count += pow(2, i);
	}
	cout << endl << count << endl;

}
void dec()
{
	int decimal, size = 5;
	int *array_dec = new int[size];
	cout << "decimal" << endl;
	cin >> decimal;

	for (int i = 0; i < size; i++)
	{
		if (decimal != 1 || decimal != 0)
		{
			array_dec[i] = decimal % 2;
			decimal = decimal / 2;
		}
	}
	for (int i = size - 1; i >= 0; i--)
	{
		cout << endl << array_dec[i] << endl;
	}
}
int main()
{
	int code;
	cout << "1-binary 2-decimal" << endl;
	cin >> code;
	switch (code)
	{
	case 1:
		binary(); break;
	case 2:
		dec(); break;
	}
}