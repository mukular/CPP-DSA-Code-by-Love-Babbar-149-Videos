//Double pointer
#include<iostream>
using namespace std;

void update(int **p)
{
    p = p + 1;
}

void update2(int **p)
{
    *p = *p + 1;
}

void update3(int **p)
{
    **p = **p + 1;
}

int main()
{
    int i = 5;
    int* p = &i;
    int** p2 = &p;

    cout<<endl<<endl<<" Sab sahi chal rha h "<<endl<<endl;

    cout<<" printing p "<<p<<endl;
    cout<<"address of p "<<&p<<endl;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl;

    cout<<endl<<endl;
    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;
    update(p2);
    cout<<"after "<<i<<endl;
    cout<<"after "<<p<<endl;
    cout<<"after "<<p2<<endl;
    cout<<endl<<endl;

    cout<<endl<<endl;
    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;
    update3(p2);
    cout<<"after "<<i<<endl;
    cout<<"after "<<p<<endl;
    cout<<"after "<<p2<<endl;
    cout<<endl<<endl;

    cout<<endl<<endl;
    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;
    update2(p2);
    cout<<"after "<<i<<endl;
    cout<<"after "<<p<<endl;
    cout<<"after "<<p2<<endl;
    cout<<endl<<endl;

    return 0;
}