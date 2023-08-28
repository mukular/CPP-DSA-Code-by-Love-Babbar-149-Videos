/*
Q.1. You are given an m x n integer matrix matrix with the following two properties:
Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.
You must write a solution in O(log(m * n)) time complexity.

Example 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

Example 2:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
*/

/*
bool searchMatrix(vector<vector<int>>& matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int start = 0;
    int end = row*col - 1;
    int mid = start + (end-start)/2;

    while(start<=end)
    {
        int element = matrix[mid/col][mid%col];
        if(element == target)
        {
            return 1;
        }
        if(element < target)
        {
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return 0;
}
*/

/*
Q.2. Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
 
Example 1:
Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true

Example 2:
Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 20
Output: false
*/

/*
bool searchMatrix(vector<vector<int>>& matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int rowIndex = 0;
    int colIndex = col-1;

    while(rowIndex < row && colIndex>=0)
    {
        int element = matrix[rowIndex][colIndex];
        if(element == target)
        {
            return 1;
        }
        if(element < target)
        {
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    return 0;
}
*/