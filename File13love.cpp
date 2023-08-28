/*Q.1.You have been given a sorted array/list ARR consisting of N elements.
You are also given an integer 'K'.
Now you task is to find the first and last occurence of k in ARR.
If k is not present then first and last occurence is -1.
ARR may contain duplicate elements.
*/

#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){

        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){

        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int even[11] = {1,2,3,3,3,3,3,3,4,4,5};
    //For Q.1.
    cout<<" first occurrence of 3 is at index "<< firstOcc(even, 11, 3)<<endl;
    cout<<" last occurrence of 3 is at index "<< lastOcc(even, 11, 3)<<endl;
    cout<<" total no. of occurence of 3 is "<<lastOcc(even, 11, 3) - firstOcc(even, 11, 3) + 1<<endl;

    return 0;
}

/*Q.2.An array arr a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.
*/

/*
Example 1:

Input: arr = [0,1,0]
Output: 1
Example 2:

Input: arr = [0,2,1,0]
Output: 1
Example 3:

Input: arr = [0,10,5,2]
Output: 1
*/

/*
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size()-1;
        int mid = s + (e-s)/2;

        while(s<e){
            if(arr[mid] < arr[mid+1]){
                s = mid + 1;
            }
            else{
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        return s;
    }
};
*/