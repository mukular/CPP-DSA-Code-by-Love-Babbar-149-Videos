// bubble sort
/*
void bubbleSort(vector<int>& arr , int n){
    for(int i =1; i<n; i++){

        bool swapped = false;
        for(int j = 0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped = false){
            break;
        }
    }
}
*/
// n is size of array
// Time complexity = O(n^2) 
// Time complexity(best case - already sorted) = O(n) 
// Time complexity(worst case - reverse sorted) = O(n^2) 
// Space complexity = O(1)
// Check bubble sort is stable or unstable
// (I have checked bubble sort is stable)
// check is there in-place sorting in bubble sort
// (I have checked there is in-place sorting in bubble sort)
