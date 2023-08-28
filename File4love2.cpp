#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    /*
    print 1
          2 1
          3 2 1
          4 3 2 1
          .
          .
          .
          n times
    */

   int i = 1;
   while (i<=n)
   {
    int j = 1;
    while (j<=i)
    {
        cout<<(i-j+1)<<" ";
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;
   }
   
    /*
    print AAA ...n times
          BBB ...n times
          CCC ...n times
          DDD ...n times
          .
          .
          .
          n times
    */

    int row = 1;
    while (row<=n)
    {
        int col = 1;
        while (col<=n)
        {
            char ch = 'A' + row - 1;
            cout<<ch;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    

     /*
    print ABC ...n times
          BCD ...n times
          CDE ...n times
          .
          .
          .
          n times
    */

   int k = 1;
   while (k<=n)
   {
    int l = 1;
    while (l<=n)
    {
        char ch = 'A' + k + l - 2;
        cout<<ch;
        l = l + 1;
    }
    cout<<endl;
    k = k + 1;
   }


    /*
    print A 
          BB
          CCC
          .
          .
          .
          n times
    */

    int m = 1;
    while(m<=n){
        int p = 1;
        while (p<=m)
        {
            char ch2 = 'A' + m - 1;
            cout<<ch2;
            p = p + 1;
        }
        cout<<endl;
        m = m + 1;
    }

     /*
    print A 
          BC
          CDE
          DEFG
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
            char ch3 = 'A' + q + r -2;
            cout<<ch3;
            r = r + 1;
        }
        cout<<endl;
        q = q + 1;
    }
    
     /*
    print n times
          .
          .
          .
          D
          CD
          BCD
          ABCD...n times
    */
    int u = 1;
    while (u<=n)
    {
        int v = 1;
        char start = 'A' + n - u;
        while (v<=u)
        {
            cout<<start;
            start = start + 1;
            v = v + 1;
        }
        cout<<endl;
        u = u + 1;
    }
    

}