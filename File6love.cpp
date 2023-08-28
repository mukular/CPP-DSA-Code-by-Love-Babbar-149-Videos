#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    //convert decimal to binary for +ve numbers
    float ans = 0;  // agar apan ans ko int lenge toh output galat aa raha h input 1000 ke liye toh abhi bhi galat aa raha h
    int i = 0;
    while(n!=0){
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout<<" Answer is "<<ans <<endl;

    //convert binary to decimal
    int m;
    cin>>m;
    int j = 0, ans2 = 0;
    while(m!=0){
        int digit = m % 10;
        if(digit == 1){
            ans2 = ans2 + pow(2,j);
        }
        m = m / 10;
        j++;
    }
    cout<< ans2 <<endl;

}