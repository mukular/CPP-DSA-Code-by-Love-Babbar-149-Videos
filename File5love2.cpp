#include<iostream>
using namespace std;

int main(){
    
    int n = 10;
    // Fibonacci series
    int a = 0;
    int b = 1;
    cout<<a <<" "<<b<<" ";
    for(int i = 1; i<=n; i++){
        int nextNumber = a + b;
        cout<<nextNumber<<" ";
        a = b;
        b = nextNumber;
    }

    // number is prime or not
    int number;
    cout<<" enter the value of number"<<endl;
    cin>>number;
    bool isPrime = 1;
    for(int j = 2; j<number; j++){
        if(number%j == 0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 0){
        cout<<" Not a Prime Number"<<endl;
    }
    else{
        cout<<" is a Prime Number"<<endl;
    }

    for(int k = 0; k<5; k++){
        cout<<" HI "<<endl;
        cout<<" Hey "<<endl;
        continue;
        cout<<"Reply toh karde "<<endl;
    }

    int f;
    cout<<f<<endl; // gives garbage value as f is not initialised

    int u = 3;
    cout<<u<<endl;

    if(true){
        cout<<u<<endl;
        int u = 5;
        cout<< u << endl;
    }
    cout<<u<<endl;

    int q = 8;
    for(int q = 0; q < 8; q++){
        cout<<" HI "<<endl;
    }

}