// 2 to 10.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
//#include <pch.h>
#include<math.h>
#include <string>
using namespace std;

string bin(int ch) ///
{
	int j;
	string str, res;
	while (ch != 0)
	{
		j = ch % 2;
		ch = ch/ 2;
		str += to_string(j);//make string
	}
	for (int i = str.length() - 1; i >= 0; i--)  //chng
	{
		res += str[i];}
	return res;
}

int _tmain(int argc, _TCHAR* argv[])
{ int *a, i,j,n,ch,t;
double x;
	
cout<<" Put 1 if 2 => 10; Put 2 if 10 => 2"<<endl;
 cin>>t;
 switch (t){
 case 1:{
	 x=0;
cout<<"Put number of 0 or/and 1"<<endl;
cin>>n;
a= new int [n];
cout<<"Input masive"<<endl;
for (i=0;i<n;i++){
cin>>a[i];

}

cout<<endl;

j=n-1;
for(i=0;i<n;i++,j--){
	x+=pow(2,j)*(a[i]);
}
 
cout<<x<<endl;break;
}

case 2: {   cout<<"Put des.number  "<<endl;
cin>>ch;

cout<<endl<<bin(ch);
 break;}
 }
 	
	return 0;
}

