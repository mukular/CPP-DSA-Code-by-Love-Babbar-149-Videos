// insertion sort

/*
void insertionSort(int n, vector<int> &arr)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for (; j >= 0; j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
    
}
*/

//n is length of array
// Space Complexity = O(1)
// Time Complexity = O(n^2)
// Time Complexity(best case - already sorted) = O(n)
// Time Complexity(worst case - reverse sorted) = O(n^2)
// check insertion sort is adaptable or not
// (I have checked that insertion sort is adaptive)
// check insertion sort is stable or unstable
// (I have checked that insertion sort is stable)