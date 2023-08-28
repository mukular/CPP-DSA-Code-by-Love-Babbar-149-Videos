// functions
#include<iostream>
using namespace std;

// is number prime
bool isPrime(int n){  // time complexity = O(n)
    for(int i =2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

// explaining pass by value
void dummy(int n){ // iss n me main function wale n ki copy banegi na ki asli n hi aa jayega
    n++;
    cout<<" n is "<< n <<endl;
}

int main(){

    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<" is a prime number"<<endl;
    }
    else{
        cout<<" is not a prime number"<<endl;
    }

    dummy(n);
    cout<<"number n is "<<n<<endl;

    return 0;
}