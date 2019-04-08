#include <iostream>

using namespace std;

long double faktor(int n)
{
    if(n<0)     
        return 0;
    if(n==0)
        return 1;
    else
        return n*faktor(n-1);
}

int main()
{
    int n;
    cout<<"input faktor"<<endl;
    cin>>n;
    faktor(n);
    cout<<faktor(n)<<endl;
    return 228;
    
}
// молодец !
