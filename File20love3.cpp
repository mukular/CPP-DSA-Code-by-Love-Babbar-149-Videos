#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main()
{
   // stl stack 
    // last in first out
    stack<string> s;
    s.push("hello");
    s.push("mukul");
    s.push("garg");
    s.push("tinnu");
    cout<<"Top element--> "<<s.top()<<endl;
    s.pop();
    cout<<"Top element--> "<<s.top()<<endl;
    cout<<"size of stack "<<s.size()<<endl;
    cout<<"Empty or not "<<s.empty()<<endl;

    // stl queue
    // first in first out
    queue<string> q;
    q.push("hell");
    q.push("muku");
    q.push("gar");
    q.push("tin");
    cout<<"size before pop "<<q.size()<<endl;
    cout<<"First element--> "<<q.front()<<endl;
    q.pop();
    cout<<"First element--> "<<q.front()<<endl;
    cout<<"size after pop "<<q.size()<<endl;

}