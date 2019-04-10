#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
struct StudentList
{
	char name[15], surname[30], patronym[30];
	int drwing, phys, progr, maths;
}*table;

void name(int i)
{
	cout << "input name " << endl;
	cin >> (table[i].name);
}
void surname(int i)
{
cout << "input surname " << endl;
		cin >> (table[i].surname);
}
void patronym(int i)
{
	cout << "input patronym " << endl;
		cin >> (table[i].patronym);
}
void drawing(int i)
{
	cout << "Drawing: ";
		cin >> (table[i].drwing);
}
void physics(int i)
{
	cout << "Physics: ";
		cin >> (table[i].phys);
}
void programming(int i)
{
	cout << "Programming: ";
		cin >> (table[i].progr);
}
void maths(int i)
{
	cout << "Maths: ";
		cin >> (table[i].maths);
}

int main()
{
	int numb, i;
	cout << "Enter a number of students ";
	cin >> numb;
	table = new StudentList[numb];
	for (i = 0; i < numb; i++)
	{
		name(i);
		surname(i);
		patronym(i);
		cout << "input marks: " << endl;
		drawing(i);
		physics(i);
		programming(i);
		maths(i);
	}
	delete[] table;
	system("pause");
	return 0;
}

// ---Реализовать интерфейс который позволяет вывести список студентов, с высчитанным средним баллом VETA
// ---Учесть возможность добавлять несколько студентов за время работы программы  NADYA
//---Сортировать студентов список студентов по среднему баллу любой сортировкой MAXIM
//(*)Поиск студента и вывода информации о нем по Имени, Фамилии, Если несколько имен Антонов - вывести всех Антонов  ROMA