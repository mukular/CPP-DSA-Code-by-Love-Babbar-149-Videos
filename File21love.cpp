#include<iostream>
#include<vector>
using namespace std;

// reverse the vector from m+1 index
vector<int> reverse(vector<int> &arr, int m)
{
    int s=m+1, e= arr.size()-1;
    while (s<=e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    return arr;
}

// print the vector
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

// merge two sorted arrays and resulting array is sorted
void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while(i<n && j<m)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while(i<n)
    {
        arr3[k++] = arr1[i++];
    }
    while(j<m)
    {
        arr3[k++] = arr2[j++];
    }
}

// printing the array
void printe(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(113);
    v.push_back(100);
    v.push_back(13);
    v.push_back(26);
    vector<int> ans = reverse(v,4);
    cout<<"Printing reverse Array"<<endl;
    print(ans);

    int arr1[5] = {1,3,5,7,9};
    int arr2[3]= {2,4,6};
    int arr3[8] = {0};

    merge(arr1,5,arr2,3,arr3);
    printe(arr3,8);

    return 0;
}

/*
Q.1. Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
*/
/*
void moveZeroes(vector<int>& nums)
{
    int i = 0;
    for(int j = 0; j<nums.size(); j++)
    { 
        if(nums[j] != 0)
        {
            swap(nums[j], nums[i]);
            i++;
        }
    }
}
*/