#include<bits/stdc++.h>
using namespace std;

// search an element in 2d array
bool isPresent(int arr[][4], int target, int row, int col) // no. of columns batane padenge arr[][] me nhi toh error aayega
// time complexity = O(row*col)
{
    for(int row =0; row<3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if(arr[row][col] == target)
            {
                return 1;
            }
        }
        
    }
    return 0;
}

// Print row wise sum
void printSum(int arr[][4], int row, int col)
{
    cout<<"Printing Sum --> "<<endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum+= arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

// Print column wise sum
void printColSum(int arr[][4], int row, int col)
{
    cout<<"Printing Sum --> "<<endl;
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum+= arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

// find row index which has largest sum
int largestRowSum(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum+= arr[row][col];
        }
        if(sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout<<"The maximum sum is "<<maxi<<endl;
    return rowIndex;
}

int main()
{
    // create 2d array
    int arr[3][4];

    int brr[3][4] = {1,2,3,4,5,6,7,8,37,23,13,20};

    int crr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    cout<<"Enter the elements "<<endl;
    // taking input --> row wise
    for(int i =0; i<3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    // // taking input --> column wise
    // for(int i =0; i<4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin>>arr[j][i];
    //     }
        
    // }

    cout<<" Printing the array "<<endl;
    // print
    for(int i =0; i<3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<" Enter the element to search "<<endl;
    int target;
    cin>>target;

    if(isPresent(arr, target, 3, 4))
    {
        cout<<" Element found "<<endl;
    }
    else
    {
        cout<<" Not found "<<endl;
    }

    printSum(arr, 3, 4);
    printColSum(arr, 3, 4);
    int ansIndex = largestRowSum(arr,3,4);
    cout<<" Max row is at index "<<ansIndex<<endl;
    return 0;
}

/*
Q.1. For a given two-dimensional integer array/list ARR of size (N*M), print the ARR in a sine wave order,i.e., 
print the first column top to bottom, next column bottom to top and so on.
Sample Input 1:
3 4
1 2 3 4
5 6 7 8
9 10 11 12

4 4
1 2 4 5
3 6 8 10
11 12 13 15
16 14 9 7
Sample Output 1:
1 5 9 10 6 2 3 7 11 12 8 4
1 3 11 16 14 12 6 2 4 8 13 9 7 15 10 5 
Explanation For Sample Input 1:
Here, the elements are printed in a form of a wave, first, the 0th column is printed from top to bottom then the 1st column from bottom to top, and so on. Basically, the even column is printed from top to bottom and the odd column in the opposite direction.
Sample Input 2:
1 1
3

1 2
6 5
Sample Output 2:
3
6 5 
*/

/*
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    // time complexity = O(N * M) where N and M are rows and columns
    // vector<vector<int>> is same as 2d array
    vector<int> ans;
    for(int col = 0; col <mCols; col++)
    {
        if(col&1)
        {
            for(int row = nRows-1; row>=0; row--)
            {
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row = 0; row<nRows; row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
*/

/*
Q.2. Given an m x n matrix, return all elements of the matrix in spiral order.

Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

Example 2:
Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
*/

/*
vector<int> spiralOrder(vector<vector<int>>& matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int count = 0;
    int total = row*col;
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row-1;
    int endingCol = col-1;

    while(count < total)
    {

    for(int index = startingCol; count < total && index<=endingCol; index++)
    {
        ans.push_back(matrix[startingRow][index]);
        count++;
    }
    startingRow++;
    for(int index = startingRow; count < total && index<=endingRow; index++)
    {
        ans.push_back(matrix[index][endingCol]);
        count++;
    }
    endingCol--;
    for(int index = endingCol; count < total && index>=startingCol; index--)
    {
        ans.push_back(matrix[endingRow][index]);
        count++;
    }
    endingRow--;
    for(int index = endingRow; count < total && index>=startingRow; index--)
    {
        ans.push_back(matrix[index][startingcol]);
        count++;
    }
    startingcol++;
    }
    return ans;
}
*/