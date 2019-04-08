// sortirovki.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;
void bubble(int*, int);
void insertion(int*,int);
void hoara(int*, int, int);
void out(int*arr,int size){
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	cout << "Input the size of array" << endl;
	int size, i;
	cin >> size;
	if (size < 0) {
		cout << "error" << endl;
		exit(0);
	}
	cout << "Input elements" << endl;
	int *arr = new int[size];
	for (i = 0; i <size; i++) {
		cin >> arr[i];
	}
	bubble(arr,size);
	insertion(arr, size);
	
	double start_time = clock();
	hoara(arr, 0, size - 1);
	out(arr,size);
	double end_time = clock();
	double search_time = end_time - start_time;
	cout << "hoara metod time" << " " << search_time << endl;

	system("pause");
	delete[]arr;
}

void bubble(int*arr, int size)
{
unsigned int start_time = clock();
	int i, j, temp;
	for (i = 0; i <size - 1;i++) {
		for (j = 0; j <size-i-1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	unsigned int end_time = clock();
	unsigned int search_time= end_time - start_time;
	out(arr,size);
cout <<"bubble metod time"<<" "<< search_time << endl;
}
void insertion(int*arr, int size)
{
	unsigned int start_time = clock();
	int i, j, temp;
	for (i = 1; i < size; i++)
	{
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			arr[j] = temp;
			j--;
		}
	}
	unsigned int end_time = clock();
	unsigned int search_time = end_time - start_time;
	
	out(arr,size);
	cout << "Time sorting inserts" << " " << search_time << endl;
}
void hoara(int*arr, int first, int last)
{
	int i = first, j = last, temp;
	double x = arr[(first + last) / 2];
	do {
		while (arr[i] < x)
			i++;
		while (arr[j] > x)
			j--;

		if (i <= j)
		{
			if (i < j)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			i++;
			j--;
		}
	} while (i <= j);

	if (i < last)
		hoara(arr, i, last);
	if (first < j)
		hoara(arr, first, j);
}
