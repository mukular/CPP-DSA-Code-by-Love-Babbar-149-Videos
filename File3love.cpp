#include <iostream>
using namespace std;

int main()
{

    int d;
    d = cin.get(); // takes character as input
    cout << " value of d is : " << d << endl;

    int a;
    cout << "hello" << endl;
    cout << " enter the value of a " << endl;
    cin >> a;
    cout << " value of a is :" << a << endl;

    if (a > 0)
    {
        cout << " A is positive" << endl;
    }
    else
    {
        if (a < 0)
        {
            cout << " A is negative" << endl;
        }
        else
        {
            cout << "A is 0" << endl;
        }
    }

    if (a > 0)
    {
        cout << " A is positive" << endl;
    }
    else if (a < 0)
    {
        cout << " A is negative" << endl;
    }
    else
    {
        cout << "A is 0" << endl;
    }

    int b, c;
    cin >> b >> c;
    cout << "value of b and c is " << b << " " << c << endl;

    int e, f;
    cout << "Enter the value of e" << endl;
    cin >> e;
    cout << "Enter the value of f" << endl;
    cin >> f;

    if (e > f)
    {
        cout << "E is greater " << endl;
    }
    if (f > e)
    {
        cout << "F is greater " << endl;
    }
}