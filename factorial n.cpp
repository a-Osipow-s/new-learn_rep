// factorial n.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
 
 int factorial(int);
int i = 1; 
 int answ; 
 
int main(int argc, char* argv[])
{    
       int n; 
       cout << "n! =  : ";
       cin >> n;
	          cout << n << "!" << "=" << factorial(n) << endl; 
       system("pause");
       return 0;
}
 
 int factorial(int f) // n!
{
       if (f == 1 || f == 0) // need?
             return 1; 
   
       i++; 
   
       answ = f * factorial(f - 1); 
       return answ;
}