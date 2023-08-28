#include<iostream>
#include<queue>
#include<set>
using namespace std;

int main()
{
    // stl priority queue

    // max heap
    // pahle maximum element aayega
    priority_queue<int> maxi;

    // min heap
    // pahle minimum element aayega
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(23);
    maxi.push(14);
    maxi.push(56);
    maxi.push(24);
    cout<<"size--> "<<maxi.size()<<endl;
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(230);
    mini.push(124);
    mini.push(556);
    mini.push(242);
    cout<<"size--> "<<mini.size()<<endl;
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    cout<<"khali h kya bhai ??--> "<<mini.empty()<<endl;

    // stl set
    // set stores unique element
    // element ko modify nhi kar sakte
    // elements return in sorted order
    // set is slow than unordered set
    // unordered set me elements random hote h
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(5);
    s.insert(0);
    s.insert(0);
    s.insert(4);
    s.insert(1);
    s.insert(6); // time complexity = O(log(n))
    
    for(auto i : s)
    {
        cout<<i<<endl;
    }
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it); // time complexity = O(log(n))
    for(auto i : s)
    {
        cout<<i<<endl;
    }
    cout<<"5 is present or not --> "<<s.count(5)<<endl; // check karega ki 5 h ya nhi
    cout<<"-5 is present or not --> "<<s.count(-5)<<endl; // check karega ki 5 h ya nhi  // time complexity = O(log(n))

    set<int>::iterator itr = s.find(4); // 4 ka iterator find karega  // time complexity = O(log(n))
    for(auto it = itr;it!= s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    // time complexity = O(1) for size , end, empty , begin of set
}