#include<iostream>
using namespace std;

void print(int *p)
{
    cout<<p<<endl;
    cout<<*p<<endl;
}

void update(int *p)
{
    p = p + 1;
    cout<<"inside "<<p<<endl;
}

void update2(int *p)
{
    *p = *p + 1;
}

int getSum(int arr[], int n)
// int getSum(int *arr, int n) real me aise aata h yeh
{
    cout<<endl<<"Size : "<<sizeof(arr)<<endl;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int value = 5;
    int *p = &value;
    print(p);
    cout<<" Before "<<p<<endl;
    update(p);
    cout<<" After "<<p<<endl;
    cout<<" Before "<<*p<<endl;
    update2(p);
    cout<<" After "<<*p<<endl;

    int arr[6] = {11,42,3,6,18,-10};
    cout<<"Sum is "<<getSum(arr, 6)<<endl;
    cout<<"Sum is "<<getSum(arr+3, 3)<<endl;
    return 0;
}