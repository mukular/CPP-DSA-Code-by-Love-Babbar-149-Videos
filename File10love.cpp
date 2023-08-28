#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[], int size){
    for(int i = 0;i <size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

void sortOne(int arr[], int n){
    int left = 0, right = n-1;
    while(left < right){
        while(arr[left] == 0 && left < right){
            left++;
        }
        while(arr[right]==1 && left < right){
            right--;
        }
        if(left<right){
        swap(arr[left], arr[right]);
        left++;
        right--; 
        }
    }
}

int main(){

    int even[8] = {5,2,9,4,7,6,1,0};
    int odd[5] = {11,33,9,76,43};

    swapAlternate(even, 8);
    printArray(even, 8);
    cout<<endl;
    swapAlternate(odd, 5);
    printArray(odd, 5);

/* Q.1. You are given an integer array/list(ARR) of size N where N is equal to 2*M + 1. 
Now in the given array/list M numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the arraylist.
*/

/*
Sample Input 1:
2 3 1 6 3 6 2
Sample Output 1:
1
Sample Input 2:
2 4 7 2 7
1 3 1 3 6 6 7 10 7
Sample Output 2:
4
10
*/

// property of XOR
// 1. a^a = 0
// 2. 0^a = a
/*
int findUnique(int *arr, int size){
    int ans = 0;
    for(int i = 0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}
*/

/*Q.2. You are given an array of size N containing each number between 1 and N-1 atleast once.
There is a single integer value that is present in the array twice.
Your task is to find the duplicate integer value present in the array.
*/

/*
Sample Input 1:
4 2 1 3 1
6 3 1 5 4 3 2
Sample Output 1:
1
3
Sample Input 2:
5 1 2 3 4 2  
8 7 2 5 4 7 1 3 6
Sample Output 2:
2
7
*/

/*
int findDuplicate(vector<int> &arr){
    int ans = 0;
    for(int i = 0; i<arr.size(); i++){
        ans = ans^arr[i];
    }
    for(int i = 1; i<arr.size(); i++){
        ans = ans^i;
    }
    return ans;
}
*/

/*Q.3. You are given two arrays A and B of size N and M respectively. Both these arrays are sorted in non-decreasing order.
You have to find the intersection of these two arrays.
Intersection of two arrays is an array that consists of all the common elements occuring in both arrays.
If there is no intersection then print -1.
*/

/*
Sample Input 1 :
1 2 2 2 3 4
2 2 3 3

1 2 3
3 4  
Sample Output 1 :
2 2 3
3   
Sample Input 2 :
1 4 5
3 4 5

3
6
Sample Output 2 :
4 5
-1
*/

/*
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // 2 pointer approach
    int i = 0, j = 0;
    vector<int> ans;
    while(i<n && j < m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    } 
    return ans;
}
*/
/*Q.4. You are given an integer array ARR of size N and an integer S.Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals S.
Each pair should be sorted i.e. the first value should be less than or equals to the second value.
Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have same first value, the pair with a smaller second value should come first.
*/

/*
Sample Input 1:
5
1 2 3 4 5
Sample Output 1:
1 4
2 3
Sample Input 2:
0
2 -3 3 3 -2
Sample Output 2:
-3 3
-3 3
-2 2
*/

/*
vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector<vector<int>> ans;

    for(int i = 0; i<arr.size(); i++){
        for(int j = i+1; j< arr.size(); j++){
            if(arr[i] + arr[j] == s){
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
*/

    int arr[8] = {1,1,0,0,0,0,1,0};
    sortOne(arr,8);
    printArray(arr, 8);
    return 0;
}