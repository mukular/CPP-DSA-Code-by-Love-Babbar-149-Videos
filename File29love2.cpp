#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout<<arr<<endl;
    cout<<ch<<endl;
    // It means cout function is differently implemented for integer array and character array
    char *c = &ch[0];
    cout<<c<<endl; // prints entire string

    char temp = 'z';
    char *p = &temp;
    cout<<p<<endl;
}