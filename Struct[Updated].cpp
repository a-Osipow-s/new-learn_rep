#include "pch.h"
#include <iostream>
#include <math.h>
#include<string>
using namespace std;
struct StudentList
{
	string name, surname, patronym;
	int drwing, phys, progr, maths;
	double averageball;
}*table,*searchtable,*tableTn;

void input(int numb, StudentList *tableT)
{
	int i;
	for (i = 0; i < numb; i++)
	{
		cout << "input name " << endl;
		cin >> (&tableT[i])->name;
		cout << "input surname " << endl;
		cin >> (&tableT[i])->surname;
		cout << "input patronym " << endl;
		cin >> (&tableT[i])->patronym;
		cout << "Input Marks: " << endl;
		cout << "Drawing: ";
		cin >> (&tableT[i])->drwing;
		cout << "Physics: ";
		cin >> (&tableT[i])->phys;
		cout << "Programming: ";
		cin >> (&tableT[i])->progr;
		cout << "Maths: ";
		cin >> (&tableT[i]) ->maths;
	}
}
void output(int numb, StudentList *tableT)
{
	int i;
	for (i = 0; i < numb; i++)
	{
		cout << "Name " << (&tableT[i])->name;
		cout << "  Surname " << (&tableT[i])->surname;
		cout << "  Patronym " << (&tableT[i])->patronym << endl;
		cout << " Marks: ";
		cout << "Drawing: " << (&tableT[i])->drwing;
		cout << "  Physics: " << (&tableT[i])->phys;
		cout << "  Programming: " << (&tableT[i])->progr;
		cout << "  Maths: " << (&tableT[i])->maths << endl;
		cout << "  Average mark: " << (&tableT[i])->averageball << endl;

	}
}

void Averagemark(int numb, StudentList *tableT)
{
	for (int i = 0; i < numb; i++)
	{
		tableT[i].averageball = (tableT[i].drwing + tableT[i].phys + tableT[i].progr + tableT[i].maths) / 4.;
		cout << endl;
	}
}
void sort(int numb, StudentList *tableT)
{
	int i, j;
	StudentList temporary;
	for (int i = 0; i < numb; i++)
		for (int j = i + 1; j < numb; j++)
			if ((&tableT[i])->averageball < (&tableT[j])->averageball)
			{
				temporary = tableT[i];
				tableT[i] = tableT[j];
				tableT[j] = temporary;
			}
}



int main()
{
	int numb;
	cout << "Enter a number of students ";
	cin >> numb;
	table = new StudentList[numb];
	input(numb,table);
	Averagemark(numb, table);
	sort(numb, table);
	output(numb,table);
	delete[]table;
	system("pause");
	return 0;
}
