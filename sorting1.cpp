﻿
#include "pch.h"
#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;
int i, j; // почему обявлено глобально счетчики?
	  // они объявляются в цикле

high_resolution_clock::time_point starttime, endtime;
void output(int*arr, int length) {

	for (i = 0; i < length; i++)
		cout << arr[i] << " ";
	cout << endl;
}



void bubble(int *arr, int length)
{
	int cash;
	for (i = 0; (i < length - 1); i++)
		for (j = i + 1; j < length; j++)
		{
			if (arr[i] > arr[j])
			{
				cash = arr[i];
				arr[i] = arr[j];
				arr[j] = cash;
			}
		}
	
}
void insert(int *arr, int length)
{
	int cash;
	for (i = 0; i < length; i++) {
		cash = arr[i];
		j = i - 1;
		while (j >= 0 && cash < arr[j]) {
			arr[j + 1] = arr[j];
			j--;

			arr[j++] = cash;
		}


	}

}
void quick(int *arr, int left,int right)
{
	
		int i = left, j = right, center=arr[(left+right)/2], cash;
		do
		{
			while (arr[i] < center)
			{
				i++;
			}
			while (center < arr[j])
			{
				j--;
			}
			if (i <= j)
			{
				cash = arr[i];
				arr[i] = arr[j];
				arr[j] = cash;
				i++;
				j--;
			}
		} while (i <= j);
		if (left < j)
		{
			quick(arr, left,j);
		}
		if (i < right)
		{
			quick(arr, i,right);
		}
	

}


int main()
{
	int length;
	cout << "Enter the number of elements:";
	cin >> length;
	int*arr = new int[length];
	for (i = 0; i < length; i++)
		arr[i] = rand() % 100 - 50;

	starttime = chrono::high_resolution_clock::now();
	bubble(arr, length);
	endtime = high_resolution_clock::now();
	auto diff = duration_cast<nanoseconds>(endtime - starttime).count();
	cout <<"current time "<< diff<<endl;
	output(arr, length);
	
	starttime = chrono::high_resolution_clock::now();
	insert(arr, length);
	endtime = high_resolution_clock::now();
    diff = duration_cast<nanoseconds>(endtime - starttime).count();
	cout << "current time " << diff << endl;
	output(arr, length);
	
	starttime = chrono::high_resolution_clock::now();
	quick(arr, 0,length-1);
	endtime = high_resolution_clock::now();
    diff = duration_cast<nanoseconds>(endtime - starttime).count();
	cout << "current time " << diff << endl;
	output(arr, length);

	delete[]arr;
	system("pause");
	return 0;
}// убрать повторяющейся код в майне, если это возможно, а так вцелом - очень хорошо!
