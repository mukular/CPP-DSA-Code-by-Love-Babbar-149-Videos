// functions
#include <iostream>
using namespace std;

// pow(a,b)

int power()
{
    int a, b;
    cin >> a >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

// number is even or odd
bool isEven(int a){
    if(a&1){
        return 0;
    }
    return 1;
}

// factorial
int factorial(int n){
    int fact = 1;
    for(int i = 1; i<= n; i++){
        fact = fact * i;
    }
    return fact;
}
// ncr
int nCr(int n, int r){
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n-r);

    return numerator/denominator;
}

// print counting
void printCounting(int n){ // we can also use return statement in case of void

    for(int i = 1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{

    cout << "answer is " <<power() << endl;  // yaha dekh pahle answer is print hona chahiye par pahle yeh input le raha h
    cout << "answer is " <<power() << endl;
    cout << "answer is " <<power() << endl;

    int num;
    cin>>num;
    if(isEven(num)){
        cout<<" Number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }

    int n , r;
    cin>>n>>r;
    cout<<" Answer is "<<nCr(n,r)<<endl;

    printCounting(n);
    return 0;
}