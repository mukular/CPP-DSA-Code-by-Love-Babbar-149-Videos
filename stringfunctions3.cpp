#include<bits/stdc++.h>
using namespace std;

int main()
{
    // str1.compare(str2) compares the value of the string object (or a substring) to the sequence of characters specified by its arguments
    // Complexity generally up to linear in both the compared and comparing string's lengths.
    string str1 ("green apple");
    string str2 ("red apple");

    if (str1.compare(str2) != 0)
    cout << str1 << " is not " << str2 << '\n';

    if (str1.compare(6,5,"apple") == 0)
    cout << "still, " << str1 << " is an apple\n";

    if (str2.compare(str2.size()-5,5,"apple") == 0)
    cout << "and " << str2 << " is also an apple\n";

    if (str1.compare(6,5,str2,4,5) == 0)
    cout << "therefore, both are apples\n";

    cout<<str1.compare("apple")<<endl;
    cout<<str1.compare("ppple")<<endl;
    cout<<str1.compare("green apple hoon")<<endl;
    cout<<str1.compare("green")<<endl;

    string foo = "alpha";
    string bar = "beta";

    // Complexity generally up to linear in both lhs and rhs's lengths.
    if (foo==bar) cout << "foo and bar are equal\n";
    if (foo!=bar) cout << "foo and bar are not equal\n";
    if (foo< bar) cout << "foo is less than bar\n";
    if (foo> bar) cout << "foo is greater than bar\n";
    if (foo<=bar) cout << "foo is less than or equal to bar\n";
    if (foo>=bar) cout << "foo is greater than or equal to bar\n";

    // foo.swap(bar) swaps
    // Complexity Constant.
    cout<<"before swap : "<<foo<<" " <<bar<<endl;
    foo.swap(bar);
    cout<<"after swap : "<<foo<<" " <<bar<<endl;


}