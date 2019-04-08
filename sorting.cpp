
#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;
void bubble(int*, int n);
void insertion(int *, int);
void hoara(int* a, int first, int last);
int main()
{
	cout << "Input the mass size" << endl;
	int i;
	int mSize;
	cin >> mSize;
	cout << "mass fill" << endl;
	int *mass = new int[mSize];
	for (i = 0; i < mSize; i++)
	{
		cin >> mass[i];
	}
	bubble(mass, mSize);
	insertion(mass, mSize);

	double start_time = clock();
	hoara(mass, 0, mSize);
	double end_time = clock();
	double search_time = end_time - start_time;
	cout << "hoara time " << search_time << endl;

	system("pause");
	delete[]mass;

}
void bubble(int*mass, int mSize)
{
	unsigned int start_time = clock(); // начальное время
	int i, j, k;
	for (i = 0; i < mSize; i++)
	{
		for (j = 0; j < mSize - 1; j++)
		{
			if (mass[i] > mass[j])
			{
				k = mass[i];
				mass[i] = mass[j];
				mass[j] = k;
			}
		}

	}
	for (i = 0; i < mSize; i++)
	{
		cout << "new mass" << mass[i] << endl;

	}

	unsigned int end_time = clock(); // конечное время
	unsigned int search_time = end_time - start_time; // искомое время
	cout << "bubble time " << search_time << endl;
}

void insertion(int*mass, int mSize)
{
	unsigned int start_time = clock();
	int i, j, k;
	for (i = 1; i < mSize; i++)
	{
		k = mass[i];
		j = i - 1;
		while (j >= 0 && mass[j] < k)
		{
			mass[j + 1] = mass[j];
			mass[j] = k;
			j--;
		}
	}
	unsigned int end_time = clock();
	unsigned int search_time = end_time - start_time;

	cout << " inserts time " << search_time << endl;
}


void hoara(int*mass, int first, int last)
{
	unsigned int start_time = clock();
	int f, l, k;
	f = first, l = last;
	double mid = mass[(first + last) / 2];
	do {
		while (mass[f] < mid)
			f++;
		while (mass[l] > mid)
			l--;

		if (f <= l)
		{
			if (f < l)
			{
				k = mass[f];
				mass[f] = mass[l];
				mass[l] = k;
			}
			f++;
			l--;
		}
	} while (f < l);

	if (first < l)
		hoara(mass, first, l);
	if (f < last)
		hoara(mass, f, last);

	unsigned int end_time = clock();
	unsigned int search_time = end_time - start_time;
	cout << "hoara time " << search_time << endl;
}


