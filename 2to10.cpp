#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int i, num, length;
string str;

string Binary(int num)
{
    string str, result;
    long long t, a=0;
    while (num!=0)
    {
        t=num;
        t=t/2;
        a=num%2;
        num=t;
        str+=to_string(a);
    }
    for (int i=str.length()-1; i>=0; i--)
    {
        result+=str[i];
    }
    cout<<result;
    return 0;
}

int Decimal(char*str,int length)
{
    
    
    double cash= 0;
    if (str[length-1] == '0') {
        int one = str[0];
        str[0] = str[length-1];
        str[length-1] = one;
    }
    for (i = 0; i < length; i++)
        
        if (str[i] == '1')
            cash += pow(2, i);
    return cash;
    
}

void Case1()
{
    cout<<"number"<<endl;
    cin>>num;
    int size=num/2;
    int *str=new int[size];
    str[0]=1;
    Binary(num);
    for( i=0; i<length; i++)
        cout<<str[i];
}

void Case2()
{
    char str[255];
    cout << "Enter binary code: ";
    cin>>str;
    length = strlen(str);
    cout <<"Your number is: "<< Decimal(str, length) << endl;
}

int main()
{
    int k;
    cout<<"1--Didgital-2-Biinary; 2--Binary-2-Didgital"<<endl;
    cin>>k;
    switch (k)
    {
        case 1: Case1();
            break;
        case 2:Case2();
            break;
    }
    return 0;
}
