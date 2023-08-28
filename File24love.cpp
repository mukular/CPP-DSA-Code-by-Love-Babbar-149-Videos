// cplusplus website par se c++ padh sakte h
#include<iostream>
using namespace std;

// Length of string
int getLength(char name[])
{
    int count = 0;
    for (int i = 0;  name[i] !='\0'; i++)
    {
        count++;
    }
    return count;
}

// reverse a string
void reverse(char name[], int n)
{
    int s = 0;
    int e = n-1;
    while (s<e)
    {
        swap(name[s++], name[e--]);

    }
    
}

// converting a char to lowercase
char toLowerCase(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

// check palindrome without considering uppercase or lowercase different
bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n-1;
    while (s<=e)
    {
        if(toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

// max occuring character in string considering lowercase and uppercase same
char getMaxOccuChar(string s) // time complexity = O(n) where n is string length // space complexity = O(1)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        if(ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else{
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if(maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    
    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name; // input me love babbar daalna toh cin keval love ko hi input lega
    // name[2] = '\0'; // input me babbar daalna uncomment karke

    cout<<"Your name is ";
    cout<<name<<endl;
    int len = getLength(name);

    cout<<" Length: "<<len<<endl;
    // reverse string
    reverse(name, len);
    cout<<"Your name is ";
    cout<<name<<endl;

    cout<<" Palindrome or Not: "<<checkPalindrome(name, len)<<endl;
    cout<<" Character is "<<toLowerCase('b')<<endl;
    cout<<" Character is "<<toLowerCase('C')<<endl;

    string s;
    cin>>s;
    cout<<getMaxOccuChar(s)<<endl;

    return 0;
}

/*
Q.1. A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward.
 Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
*/

/*
bool valid(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}

char toLowerCase(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string a)
{
    int s = 0;
    int e = a.length()-1;
    while (s<=e)
    {
        if(a[s] != a[e])
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

bool isPalindrome(string s)
{
    string temp = "";
    for(int j = 0; j< s.length(); j++)
    {
        if(valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }
    for(int j =0; j<temp.length(); j++)
    {
        temp[j] = toLowerCase(temp[j]);
    }
    return checkPalindrome(temp);
}
*/