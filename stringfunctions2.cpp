#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Complexity generally up to linear in length()-pos times the length of the sequence to match (worst case).
    string str = "Hello mukul go to see hello mukul good muku Hello see you soon!";
    for(int i = 0; i < str.length(); i++)
    {
        cout<<i<<"."<<str[i]<<" ";
    }
    cout<<endl<<"find from start"<<endl;
    string str2 = "mukul";
    cout<<endl;
    int ind = str.find(str2);
    cout<<ind<<endl;
    ind = str.find("good");
    cout<<ind<<endl;
    ind = str.find("Hello", 2);
    cout<<ind<<endl;
    ind = str.find("mukul go mukul", 10, 8); // search from 10 index mukul go(length 8)
    cout<<ind<<endl;
    ind = str.find('o');
    cout<<ind<<endl;
    ind = str.find("tinnu");
    cout<<ind<<endl;

    cout<<"Now find from last"<<endl;
    ind = str.rfind(str2);
    cout<<ind<<endl;
    ind = str.rfind("good");
    cout<<ind<<endl;
    ind = str.rfind("Hello", 40);
    cout<<ind<<endl;
    ind = str.rfind("mukul go mukul", 10, 8); // search from 10 index mukul go(length 8)
    cout<<ind<<endl;
    ind = str.rfind('o');
    cout<<ind<<endl;
    ind = str.rfind("tinnu");
    cout<<ind<<endl;

    cout<<"find from start inme se koi bhi character"<<endl;
    ind = str.find_first_of(str2);
    cout<<ind<<endl;
    ind = str.find_first_of("good");
    cout<<ind<<endl;
    ind = str.find_first_of("Hello", 40);
    cout<<ind<<endl;
    ind = str.find_first_of("mukul go", 11, 5); // search from 11 index mukul(length 5)
    cout<<ind<<endl;
    ind = str.find_first_of('o');
    cout<<ind<<endl;
    ind = str.find_first_of("xz");
    cout<<ind<<endl;

    cout<<"find from last inme se koi bhi character"<<endl;
    ind = str.find_last_of(str2);
    cout<<ind<<endl;
    ind = str.find_last_of("good");
    cout<<ind<<endl;
    ind = str.find_last_of("Hello", 40);
    cout<<ind<<endl;
    ind = str.find_last_of("mukul go", 11, 5); // search from 11 index mukul(length 5)
    cout<<ind<<endl;
    ind = str.find_last_of('o');
    cout<<ind<<endl;
    ind = str.find_last_of("xz");
    cout<<ind<<endl;

    cout<<"find from start inke alawa koi bhi character"<<endl;
    ind = str.find_first_not_of(str2);
    cout<<ind<<endl;
    ind = str.find_first_not_of("good");
    cout<<ind<<endl;
    ind = str.find_first_not_of("Hello", 40);
    cout<<ind<<endl;
    ind = str.find_first_not_of("mukul go", 11, 5); // search from 11 index mukul(length 5)
    cout<<ind<<endl;
    ind = str.find_first_not_of('o');
    cout<<ind<<endl;
    ind = str.find_first_not_of("xz");
    cout<<ind<<endl;

    cout<<"find from last inke alawa koi bhi character"<<endl;
    ind = str.find_last_not_of(str2);
    cout<<ind<<endl;
    ind = str.find_last_not_of("good");
    cout<<ind<<endl;
    ind = str.find_last_not_of("Hello", 40);
    cout<<ind<<endl;
    ind = str.find_last_not_of("mukul go", 10, 5); // search from 11 index mukul(length 5)
    cout<<ind<<endl;
    ind = str.find_last_not_of('o');
    cout<<ind<<endl;
    ind = str.find_last_not_of("xz");
    cout<<ind<<endl;

    // str.substr() returns a newly constructed string object with its value initialized to a copy of a substring of this object.
    // Complexity generally linear in the length of the returned object.
    string my = str.substr(12,9);
    string my1 = str.substr(40);
    cout<<my<<endl;
    cout<<my1<<endl;

    int num = 4;
    string s = to_string(num);
    cout<<s+"8"<<endl;
    int n = stoi(s);
    cout<<n+3;
}