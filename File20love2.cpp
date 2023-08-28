#include<iostream>
#include<deque>
#include<list>
using namespace std;

int main()
{
// stl deque (doubly ended queue)
// dono end par yani beginning and end dono par push ya pop kar sakte h
    deque<int> d;
    d.push_back(12); // peeche 12 daal diya
    d.push_front(23); // aage 23 daal diya
    d.push_front(42);
    d.push_back(67);
    for(int i: d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_back(); // peeche se pop kar diya element
    for(int i: d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Print first index element--> "<<d.at(1)<<endl;
    cout<<"front element "<<d.front()<<endl;
    cout<<"back element "<<d.back()<<endl;
    cout<<"Empty or not "<<d.empty()<<endl;
    d.pop_front(); // aage se pop kar diya element
    for(int i: d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.push_back(14);
    d.push_back(12);
    d.push_back(17);
    d.push_back(89);
    cout<<"before erase "<<d.size()<<endl; // gives size
    for(int i: d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.erase(d.begin(),d.begin()+2); // deletes from begin to begin + 1 but memory allocate utni hi rahegi jitni starting me thi
    cout<<"after erase "<<d.size()<<endl;
    for(int i: d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // stl list
    list<int> l;
    l.push_back(34);
    l.push_front(23);
    l.push_back(4);
    l.push_front(3);
    l.push_back(85);
    l.push_front(27);
    l.push_back(45);
    l.push_front(77);
    for(int i: l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i: l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list "<<l.size()<<endl;

    list<int> n(l); // copy l in n
    for(int i: n)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    list<int> p(5,100);
    for(int i: p)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}