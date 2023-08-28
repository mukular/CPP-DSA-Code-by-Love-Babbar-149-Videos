#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i = 1;
    //print numbers from 1 to n
    while(i<=n){
        cout<<i<<" ";
        i = i + 1;
    }
    //print sum of numbers from 1 to n
    int j = 1;
    int sum = 0;
    while(j<=n){
        sum = sum + j;
        j = j + 1;
    }
    cout<<"value of sum is " << sum << endl;
    // n is prime number or not
    int k = 2;
    while(k < n){
        if(n%k==0){
            cout<<" Not prime for " << k <<endl;
        }
        else{
            cout<<"Prime for "<< k <<endl;
        }
        k = k + 1;
    }

    /* print ****....n times
             ****
             ****
             ****
             .
             .
             .
             n times
             */

    int l = 1;
    while(l<=n){
        int m = 1;
        while (m<=n)
        {
            cout<<"*";
            m = m + 1;
        }
        cout<<endl;
        l = l + 1;
    }

    /* print 111....n times
             222
             333
             444
             .
             .
             .
             n times
             */

    int t = 1;
    while(t<=n){
        int u = 1;
        while (u<=n)
        {
            cout<<t;
            u = u + 1;
        }
        cout<<endl;
        t = t + 1;
    }

}