#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main()
{
    // stl array
    array<int,4> a = {23,12,56,33}; // array<int ,4> means 4 sized static array which contains int values
     int size = a.size();
     for (int i = 0; i < size; i++)
     {
        cout<<a[i]<<endl;
     }

     cout<<"Element at 2nd index--> "<<a.at(2)<<endl; //gives element at index 2  // time complexity = O(1)
     cout<<"Empty or not--> "<<a.empty()<<endl;   // check array is empty or not // time complexity = O(1)
     cout<<"First Element--> "<<a.front()<<endl; // gives 1st element  // time complexity = O(1)
     cout<<"last Element--> "<<a.back()<<endl;   // gives last element // time complexity = O(1)

    // stl vector
    // vector is a dynamic array 
    // when vector is full then jaise hi naya element daalenge vector doubles its capacity, matlab yeh naya vector banayega double capacity ka isme purane saare element copy kardega aur purana vector dead ho jayega
    vector<int> v;
    cout<<"Capacity--> "<<v.capacity()<<endl;
    v.push_back(13); // 13 vector me daal diya
    cout<<"Capacity--> "<<v.capacity()<<endl;
    v.push_back(21); 
    cout<<"Capacity--> "<<v.capacity()<<endl;
    v.push_back(43); 
    cout<<"Capacity--> "<<v.capacity()<<endl; // capacity batata h kitna space h elements ke liye
    cout<<"Size--> "<<v.size()<<endl;         // size batata h kitne elements h
    cout<<"Element at 2nd index--> "<<v.at(2)<<endl; //gives element at index 2
    cout<<"front "<<v.front()<<endl; // gives first element
    cout<<"back "<<v.back()<<endl; // gives last element
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back(); // removes last element
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"before clear size "<<v.size()<<endl;
    v.clear(); // deletes all elements
    cout<<"after clear size "<<v.size()<<endl;

    vector<int> b(5, 1); // vector jiska size 5 h and all elements are initiaized to 1 // default case me 0 se initialized ho jayenge saare
    cout<<"print b"<<endl;
    for(int i: b)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> last(b); // last vector me b ke saare elements copy ho jayenge
    cout<<"print last"<<endl;
    for(int i: last)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}