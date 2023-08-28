#include<iostream>
#include<map>
using namespace std;

int main()
{
    //stl map 
    // stores data as key-value pair
    // key is unique
    // one key should point only one value
    map<int ,string> m;

    m[1] = "garg";
    m[13] = "tinnu";
    m[12] = "mukul";

    m.insert({5,"keshav"}); // Time Complexity = O(log(n))
    for(auto i:m)
    {
        cout<<i.first<<endl; // prints in sorted order
    }

    cout<<"before erase"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 13--> "<<m.count(13)<<endl; // Time Complexity = O(log(n))
    cout<<"finding 3--> "<<m.count(3)<<endl;

    m.erase(12); // Time Complexity = O(log(n))
    cout<<"after erase"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(5); // Time Complexity = O(log(n))
    for(auto i=it; i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }

}