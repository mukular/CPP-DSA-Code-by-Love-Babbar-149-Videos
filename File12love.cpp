// binary search
// Elements should be in monotonic function means increasing or decreasing order
// time complexity = O(log(n))
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    // int mid = (start+end)/2; // galat h agar start aur end dono hi (2 ki power 31)-1 ho gaye toh start + end range se bhahar ho jayega
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

int main(){

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int evenindex = binarySearch(even, 6, 6);
    cout<<" Index of 6 is "<< evenindex <<endl;

    int oddindex = binarySearch(odd, 5, 14);
    cout<<" Index of 14 is "<< oddindex <<endl;

    return 0;
}
