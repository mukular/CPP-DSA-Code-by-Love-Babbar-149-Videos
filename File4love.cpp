#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    /*print 123...n times
            123...n times
            123...n times
            .
            .
            .
            n times
          */
    int i = 1;
    while(i<=n){
        int j = 1;
        while (j<=n)
        {
            cout<<j;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    /*print nn-1n-2....1
            nn-1n-2....1
            nn-1n-2....1
            .
            .
            .
            n times
          */
    int k = 1;
    while(k<=n){
        int l = 1;
        while (l<=n)
        {
            cout<<n-l+1;
            l = l + 1;
        }
        cout<<endl;
        k = k + 1;
    }

     /*print 1 2 3..n times
             4 5 6
             7 8 9
             .
             .
             .
            n times
          */

    int m = 1;
    int count = 1;
    while(m<=n){
        int p = 1;
        while (p<=n)
        {
            cout<<count<<" ";
            count = count + 1;
            p = p + 1;
        }
        cout<<endl;
        m = m + 1;
    }

 /*print    *
            **
            ***
            ****
            .
            .
            .
            n times
          */


    int row =1;
    while (row<=n)
    {
        int col = 1;
        while (col<=row)
        {
            cout<<"*";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }

    /*print 1
            22
            333
            4444
            .
            .
            .
            n times
          */
    
    int q = 1;
    while (q<=n)
    {
        int r = 1;
        while (r<=q)
        {
            cout<<q;
            r = r + 1;
        }
        cout<<endl;
        q = q + 1;
    }
    

    /*print 1
            23
            345
            4567
            .
            .
            .
            n times
          */

    int ro = 1;
    while (ro<=n)
    {
        int co = 1;
        int value = ro;
        while (co<=ro)
        {
            cout<<value;
            value = value + 1;
            co = co + 1;
        }
        cout<<endl;
        ro = ro + 1;
    }
    
}