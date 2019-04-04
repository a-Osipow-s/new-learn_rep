#include "pch.h"
#include <iostream>

using namespace std;
int factorial(int);
int main()
{
	int num;
	cout<<"input number"<<endl;
	cin>>num;
	if (num < 0)
		cout<<"error"<<endl;
	cout<<"factorial="<<factorial(num)<<endl;
}
int factorial(int num)
{
	if (num == 0)return 1;
	else return num * factorial(num - 1);
}