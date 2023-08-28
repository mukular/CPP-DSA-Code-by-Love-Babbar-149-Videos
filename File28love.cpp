#include<iostream>
using namespace std;

int main()
{
    int num = 5;
    cout<<num<<endl;

    // address is printed in hexadecimal format
    cout<<" address of num is "<<&num <<endl; // & is addressOf operator

    int *ptr = &num;
    cout<<"value is: "<<*ptr<<endl; // * is dereference operator
    cout<<"Address is: "<<ptr<<endl;

    double d = 4.3;
    double *p2 = &d;
    cout<<"value is: "<<*p2<<endl;
    cout<<"Address is: "<<p2<<endl;
    cout<<" size of integer is "<<sizeof(num)<<endl;
    cout<<" size of pointer is "<<sizeof(ptr)<<endl;
    cout<<" size of pointer is "<<sizeof(p2)<<endl;

    int *p = 0; // p points to null
    // cout<<*p<<endl; // run nhi hoga kyoki null wali memory exist hi nhi karti

    int i = 5;
    p = &i;
    cout<<p<<endl;
    cout<<*p<<endl;

    int a = num;
    a++;
    cout<<num<<endl;
    cout<<"before "<<num<<endl;
    (*ptr)++;
    cout<<"after "<<num<<endl;

    // coping a pointer
    int *q = ptr;
    cout<<ptr<<" - "<<q<<endl;
    cout<<*ptr<<" - "<<*q<<endl;

    int m = 3;
    int *t = &m;
    *t = *t + 1;
    cout<<*t<<endl;
    cout<<" before t "<<t<<endl;
    t = t + 1;
    cout<<" after t "<<t<<endl;
    
    return 0;
}