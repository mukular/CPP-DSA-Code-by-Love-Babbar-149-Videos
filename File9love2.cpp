#include<iostream>
using namespace std;

void update(int arr[], int n){
    cout<<"Inside the function"<<endl;

    //updating array's first element
    arr[0] = 120;

    //printing the array
    for(int i = 0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<" Going back to main function"<<endl;

}

//linear search
bool search(int arr[], int size, int key){ // time complexity = O(n)
    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

void printArray(int arr[], int n){ // time complexity = O(n)
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[], int n){ // time complexity = O(n)
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[3] = {1,2,3};

    update(arr, 3); // here base address of array is given to function update

    //printing the array
    cout<<endl<<"Printing in main function"<<endl;
    for(int i = 0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int arr2[10] = {5,7,-2,10,22,-2,0,5,22,1};
    //searching an element in array
    cout<<" Enter the element to search for "<<endl;
    int key;
    cin>>key;

    bool found = search(arr2, 10, key);

    if(found){
        cout<<" Key is present "<<endl;
    }else{
        cout<<" Key is absent "<<endl;
    }

    //reversing the array
    int brr1[6] = {1,4,0,5,-2,15};
    int brr2[5] = {2,6,3,9,4};

    reverse(brr1, 6);
    reverse(brr2, 5);

    printArray(brr1, 6);
    printArray(brr2, 5);

    return 0;
}