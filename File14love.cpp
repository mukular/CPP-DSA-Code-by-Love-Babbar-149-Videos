#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){

    int arr[5] = {8,10,17,1,3};  // sorted then rotated array
    // pivot means here minimum element index
    // array is given first in increasing order then minimum element then increasing

    cout<<"Pivot is "<<getPivot(arr, 5)<<endl;
    return 0;
}
/*Q.1. You have been given a sorted array/list ARR consisting of N elements.You are also given an integer k.
Now the array is rotated at some pivot point unknown to you. For ex., if ARR = {1,3,5,7,8}.
Then after rotating ARR at index 3, the array will be ARR = {7,8,1,3,5}.
Now, your task is to find the index at which k is present in ARR.
If k is not present in ARR then print -1.
There are no duplicate elements in ARR.
ARR can be rotated in right direction.
*/


/*
int getPivot(vector<int>& arr, int n){ // time complexity = O(log(n))
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int binarySearch(vector<int>& arr, int s, int e , int key){ // time complexity = O(log(n))

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid =  start + (end-start)/2;
    }
    return -1;
}


int findPosition(vector<int>& arr, int n, int k)
{ // time complexity = O(log(n))
    int pivot = getPivot(arr, n);
    if(k >= arr[pivot] && k <= arr[n-1]){
        return binarySearch(arr, pivot, n-1, k);
    }
    else{
        return binarySearch(arr, 0, pivot-1, k);  
    }
}
*/
