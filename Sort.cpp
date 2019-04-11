#include <iostream>

using namespace std;

void push(int sizeArr, int *Arr)
{
    cout << "Input elements" << endl;
    for (int i = 0; i < sizeArr; i++)
    {
        cin >> Arr[i];
    }
}

void out(int *Arr,int sizeArr)
{
    for (int i = 0; i < sizeArr; i++)
        cout << Arr[i] << " ";
  
}

void bubble(int*Arr, int sizeArr)
{
    int i, j, t;
    for (i = 0; i <sizeArr - 1;i++) {
        for (j = 0; j <sizeArr-i-1;j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                t = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = t;
            }
        }
    }

}

void hoara(int *Arr,int first,int last, int sizeArr)
{
    int t;
    int i=first, j=last;
    double x=Arr[(first+last)/2];
    do
    {
        while (Arr[i]<x)
        {
            i++;
        }
        while (Arr[j]>x)
        {
            j--;
        }
        if (i<=j)
        {
            if (i<j)
            {
                t=Arr[i];
                Arr[i]=Arr[j];
                Arr[j]=t;
            }
            i++;
            j--;
        }
    }
    while (i<=j);
    if(i<last)
        hoara(Arr, i, last,sizeArr);
    if(first<j)
        hoara(Arr, first, j, sizeArr);
   
    cout<<endl;
}

void inserts(int *Arr, int sizeArr)
{
    int i, j, t;
    for (i=1; i<sizeArr; i++)
    {
        t=Arr[i];
        j=i-1;
        while(j>=0 && Arr[j]>t)
        {
            Arr[j+1]=Arr[j];
            Arr[j]=t;
            j--;
        }
    }
    cout<<endl;
}

int main()
{
    int sizeArr;
    int *Arr = new int[sizeArr];
    cout<<"size=";
    cin>>sizeArr;
    push(sizeArr, Arr);
    bubble(Arr,sizeArr);
    out(Arr, sizeArr);
    hoara(Arr, 0, sizeArr-1, sizeArr);
    out(Arr, sizeArr);
    inserts(Arr,sizeArr);
    out(Arr, sizeArr);
    
}
