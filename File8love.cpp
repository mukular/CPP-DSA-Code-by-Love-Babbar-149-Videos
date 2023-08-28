#include<iostream>
using namespace std;

int main(){

    int num = 2;

    cout<<endl;
    switch(num/2){
        case 1: cout<<"First"<<endl;
                cout<<" First again "<<endl;
        case 2: cout<<"Second"<<endl;
            break;

        default: cout<<" It is default case"<<endl;

    }

    char ch = '1';

    cout<<endl;
    switch(ch){
        case 1: cout<<"First"<<endl;
                break;

        case '1': cout<<"character one"<<endl;
            switch (num/2)
            {
            case 1:
                cout<<"Value of num is "<<num<<endl;
                break;
            }
            break;

        default: cout<<" It is default case"<<endl;

    }

    int a,b;
    cout<<" Enter the value of a "<<endl;
    cin>>a;
    cout<<" Enter the value of b "<<endl;
    cin>>b;

    char op;
    cout<<" Enter the operation you want to perform"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
    {
        cout<<(a+b)<<endl;
        break;
    }
    
    case '-':
        cout<<(a-b)<<endl;
        break;
    
    case '*':
        cout<<(a*b)<<endl;
        break;
    
    case '/':
        cout<<(a/b)<<endl;
        break;
    
    case '%':
        cout<<(a%b)<<endl;
        break;
    
    default: cout<<"Please enter a valid operation "<<endl;
    }

}