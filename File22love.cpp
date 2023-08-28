/*
Q.1. Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
*/
/*
void rotate(vector<int>& nums, int k)
{
    vector<int> temp(nums.size());
    for(int i = 0; i<nums.size(); i++)
    {
        temp[(i+k)%nums.size()] = nums[i];
    }
    nums = temp; // copy temp into nums vector
}
*/
/*
Q.2. Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.
There may be duplicates in the original array.
Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.

Example 1:

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the element of value 3: [3,4,5,1,2].
Example 2:

Input: nums = [2,1,3,4]
Output: false
Explanation: There is no sorted array once rotated that can make nums.
Example 3:

Input: nums = [1,2,3]
Output: true
Explanation: [1,2,3] is the original sorted array.
You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.
 
*/

/*
bool check(vector<int>& nums)
{
    int count = 0;
    int n = nums.size();
    for(int i = 1; i < n; i++)
    {
        if(nums[i-1] > nums[i])
        {
            count++;
        }
    }
    if(nums[n-1] > nums[0])
    {
        count++;
    }

    return count<=1;
}
*/

/*
// contributed by omkar deshmukh boss
Q.3. You are given two numbers 'A' and 'B' in the form of two arrays A[] and B[] of lengths N and M respectively where each array element represents a digit.
You need to find the sum of these two numbers and return this sum in the form of an array.
Note:
1. The length of each array is greater than zero.
2. The first index of each array is the most significant digit of the number.
3. Both numbers do not have any leading zeroes in them. And subsequently, the sum should not contain any leading zeroes.

Sample Input 1: 
4 1
1 2 3 4
6
Answer:- 1 2 4 0
3 2
1 2 3
9 9    
Answer:- 2 2 2
Explanation For Sample Input 1:
For the first test case, the integer represented by the first array is 1234 and the second array is 6, so the sum is 1234 + 6 =  1240.

For the second test case, the integer represented by the first array is 123 and the second array is 99, so the sum is 123 + 99 = 222.
Sample Input 2:
3 3 
4 5 1
3 4 5
Answer:- 7 9 6
2 2
1 1
1 2
Answer:- 2 3
*/

/*

vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size()-1;
    while(s<e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m)
{
    int i = n-1;
    int j = m-1;
    int carry = 0;
    while(i>=0 && j>=0)
    {
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0)
    {
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0)
    {
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry !=0)
    {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }

    reverse(ans);
    return ans;
}
*/