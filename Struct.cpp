#include "pch.h"
#include <iostream>
#include <math.h>
#include<string>
using namespace std;
struct StudentList
{
	string name, surname, patronym;
	int drwing, phys, progr, maths;
}*table;

void input(int numb)
{
	int i;
	for (i = 0; i < numb; i++)
	{
		cout << "input name " << endl;
		cin >> table->name;
		cout << "input surname " << endl;
		cin >> table->surname;
		cout << "input patronym " << endl;
		cin >> table->patronym;
		cout << "Input Marks: " << endl;
		cout << "Drawing: ";
		cin >> table->drwing;
		cout << "Physics: ";
		cin >> table->phys;
		cout << "Programming: ";
		cin >> table->progr;
		cout << "Maths: ";
		cin >> table->maths;
	}
}
void output(int numb)
{
	int i;
	for (i = 0; i < numb; i++)
	{
		cout << "Name " << table->name;
		cout << "  Surname " << table->surname;
		cout << "  Patronym " << table->patronym << endl;
		cout << " Marks: ";
		cout << "Drawing: " << table->drwing;
		cout << "  Physics: " << table->phys;
		cout << "  Programming: " << table->progr;
		cout << "  Maths: " << table->maths << endl;

	}
}
int main()
{
	int numb;
	cout << "Enter a number of students ";
	cin >> numb;
	table = new StudentList[numb];
	input(numb);
	output(numb);


	system("pause");
	return 0;
}