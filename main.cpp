#include <iostream>

using namespace std;

struct Skobka
{
    int info;
    Skobka *next, *head;
};

void Push (int info, Skobka *&SkobkaPointer)
{
    Skobka *t= new Skobka;
    t->info=info;
    t->next=SkobkaPointer->head;
    SkobkaPointer->head=t;
}

void Show (Skobka *SkobkaPointer)
{
    Skobka *t=SkobkaPointer->head;
    while (t!=NULL)
    {
        cout<<t->info<<" ";
        t=t->next;
    }
}

void Kruglie(int n, Skobka *&head, Skobka *SkobkaPointer, int &k)
{
    Skobka *t = SkobkaPointer->head;
    k = 0;
    while (t != NULL)
    {
        if (t->info == '(')
        {
            k++;
        }
        
        if (t->info == ')')
        {
            k--;
        }
        t = t->next;
    }
    {
        if (k == 0)
        {
            cout<<"()true"<<endl;
        }
        else
        {
            cout<<"()false"<<endl;
        }
        cout<<endl;
    }
}

void Figurnie (int n, Skobka *&head, Skobka *SkobkaPointer, int &p)
{
    Skobka *t = SkobkaPointer->head;
    p = 0;
    while (t != NULL)
    {
        if (t->info == '{')
        {
            p++;
        }
        
        if (t->info == '}')
        {
            
            p--;
        }
        t = t->next;
    }
    {
        if (p == 0)
        {
            cout<<"{}true"<<endl;
        }
        else
        {
            cout<<"{}false"<<endl;
        }
        cout<<endl;
    }
}

void Kvadtatnie(int n, Skobka *&head, Skobka *SkobkaPointer,int &q)
{
    Skobka *t = SkobkaPointer->head;
    q = 0;
    while (t != NULL)
    {
        if (t->info == '[')
        {
            q++;
        }
        
        if (t->info == ']')
        {
            q--;
        }
        t = t->next;
    }
    {
        if (q == 0)
        {
            cout<<"[]true"<<endl;
        }
        else
        {
            cout<<"[]false"<<endl;
        }
        cout<<endl;
    }
}

void pop(Skobka *SkobkaPointer) {
    while (SkobkaPointer->head != NULL) {
        Skobka *t = SkobkaPointer->head->next;
        delete SkobkaPointer->head;
        SkobkaPointer->head=t;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, i, k, p, q;
    char elem;
    cout<<"Количество элементов"<<endl;
    cin>>n;
    Skobka *head = NULL;
    Skobka *NewSkobka = new Skobka;
    Skobka *SkobkaPointer = new Skobka;
    SkobkaPointer->head = NULL;
    NewSkobka->head = NULL;
    for (i = 0; i < n; i++)
        
    {
        cout<<"Элемент"<<endl;
        cin>>elem;
        Push(elem, SkobkaPointer);
    }
    Show(SkobkaPointer);
    cout<<endl;
    Kruglie(n, head, SkobkaPointer, k);
    cout<<endl;
    Kvadtatnie(n, head, SkobkaPointer ,q);
    cout<<endl;
    Figurnie(n, head, SkobkaPointer, p);
    cout<<endl;
    pop(SkobkaPointer);
    pop(NewSkobka);
    delete NewSkobka->head;
    delete NewSkobka;
    delete SkobkaPointer->head;
    delete SkobkaPointer;
    return 228;
}
