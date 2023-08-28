// Array
// #include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    cout<<" printing the array "<<endl;
    // print the array
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<" printing done "<<endl;
}

int getMax(int num[], int n){  // time complexity = O(n)
    int maxele = INT_MIN;
    for(int i = 0; i <n; i++){
       maxele = max(maxele, num[i]);
    }
    return maxele;
}

int getMin(int num[], int n){
    int minele = INT_MAX;
    for(int i = 0; i <n; i++){
       minele = min(minele, num[i]);
    }
    return minele;
}

int main(){

    // declare
    int number[15];

    //accessing an array
    cout<<"Value at 0 index "<<number[0]<<endl;
    cout<<"Value at 1 index "<<number[1]<<endl;
    cout<<"Value at 20 index "<<number[20]<<endl;

    //initializing an array
    int second[3] = {5,7,11};
    cout<<"Value at 2 index "<<second[2]<<endl;

    int third[15] = {2,7};
    int n = 15;
    cout<<" printing the array "<<endl;
    // print the array
    for(int i = 0; i<n; i++){
        cout<<third[i]<<" ";
    }

    //initializing all locations with 0
    int fourth[10] = {0};
    printArray(fourth,10);

    int fourthsize = sizeof(fourth)/sizeof(int);
    cout<<" Size of fourth is "<<fourthsize<<endl;

    char ch[5] = {'a','b','c','r','p'};
    cout<<ch[3]<<endl;

    cout<<" printing the array "<<endl;
    // print the array
    for(int i = 0; i<5; i++){
        cout<<ch[i]<<" ";
    }


    cout<<endl<<" Everything is fine "<<endl;

    int size;
    cin>>size;

    // int num[size];  // ghatiya practice h yeh variable size array is tarah banana
    int num[100];

    for(int i = 0; i< size; i++){
        cin>>num[i];
    }
    // maximum element in array
    cout<<" Maximum value is "<<getMax(num, size)<<endl;
    // minimum element in array
    cout<<" Minimum value is "<<getMin(num, size)<<endl;
    return 0;
}