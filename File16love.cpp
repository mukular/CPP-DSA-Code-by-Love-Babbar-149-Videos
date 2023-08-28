// selection sort
/*
void selectionSort(vector<int>& arr, int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;

        for(int j = i+1; j<n; j++){

            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
*/
// n is size of array
// Space complexity = O(1)
// Time complexity(in best case and worst case both) = O(n^2)
// Use selection sort when array size is small or memory constraints
// Check selection sort is stable or unstable
// (I have checked selection sort is not stable)