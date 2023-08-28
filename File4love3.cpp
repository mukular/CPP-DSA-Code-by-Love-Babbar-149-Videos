#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    /*
    print
        *
       **
      ***
     ****
     .
     .
     .
     n times
    */

   int row = 1;
   while (row<=n)
   {
    int space = n-row;
    while (space)
    {
        cout<<" ";
        space = space - 1;
    }
    int col = 1;
    while (col<=row)
    {
        cout<<"*";
        col = col + 1;
    }
    cout<<endl;
    row = row + 1;
   }
   
    
    /*
    print
        1
       121
      12321
     1234321
     .
     .
     .
     n times
    */

    int i = 1;
    while (i<=n)
    {
        int space2 = n-i;
        while (space2)
        {
            cout<<" ";
            space2 = space2 - 1;
        }
        
        int j = 1;
        while (j<=i)
        {
            cout<<j;
            j = j + 1;
        }

        int k = i - 1;
        while (k)
        {
            cout<<k;
            k = k - 1;
        }
        cout<<endl;
        i = i + 1;
        
    }
    
}