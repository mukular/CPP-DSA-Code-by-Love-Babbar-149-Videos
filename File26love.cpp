#include<iostream>
using namespace std;

// number is prime or not
bool isPrime(int n) // time complexity = O(n)
{
    if(n<=1)
    {
        return false;
    }
    for (int i = 2; i < n; i++) 
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

// gcd of two numbers
int gcd(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    while (a!=b)
    {
        if(a>b)
        {
            a= a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main()
{
    int n;
    cin>>n;
    if(isPrime(n))
    {
        cout<<"It is a Prime Number"<<endl;
    }
    else{
        cout<<" It is not a Prime Number"<<endl;
    }

    int a, b;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;
    int ans = gcd(a,b);
    cout<<" The GCD of "<<a<<" & "<<b<<" is: "<<ans<<endl;
}

/*
Q.1. Given an integer n, return the number of prime numbers that are strictly less than n.

Example 1:
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

Example 2:
Input: n = 0
Output: 0

Example 3:
Input: n = 1
Output: 0
*/

/*
1st approach -->
// time complexity = O(n^2)
bool isPrime(int n)
{
    if(n<=1)
    {
        return false;
    }
    for (int i = 2; i < n; i++) 
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int countPrimes(int n)
{
    int cnt = 0;
    for(int i=2; i<n; i++)
    {
        if(isPrime(i))
        {
            cnt++;
        }
    }
    return cnt;
}
*/

/*
// sieve of eratosthenes
2nd approach(best) -->
// time complexity = O(n*log(log(n)))
int countPrimes(int n)
{
    int cnt = 0;
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;
    for(int i=2; i<n; i++)
    {
        if(prime[i])
        {
            cnt++;
            for(int j=2*i; j<n; j=j+i)
            {
                prime[j] = 0;
            }
        }
    }
    return cnt;
}
*/

/*
Q.2. You are given a three integers X, N, M.
Your task is to find (X^N)%M.
A ^ B is defined as A raised to power B and A % C is the remainder when A is divided by C.
Constraints:
1 <= X,N,M <= 10^9
Sample Input 1 :
3 1 2
4 3 10
Sample Output 1 :
1
4
Explanation For Sample Output 1:
In test case 1, 
X = 3, N = 1, and M = 2 
X ^ N = 3 ^ 1 = 3 
X ^ N % M = 3 % 2 = 1. 
So the answer will be 1.

In test case 2,
X = 4, N = 3, and M = 10 
X ^ N = 4 ^ 3 = 64 
X ^ N % M = 64 % 10 = 4. 
So the answer will be 4.
Sample Input 2 :
5 2 10 
2 5 4
Sample Output 2 :
5
0
Explanation For Sample Output 2:
In test case 1, 
X = 5, N = 2, and M = 10 
X^N = 5^2 = 25 
X^N %M = 25 % 10 = 5. 
So the answer will be 5.

In test case 2,
X = 2, N = 5, and M = 4 
X^N = 2^5 = 32 
X^N %M = 32 % 4 = 0. 
So the answer will be 0.
*/

/*
int modularExponentiation(int x, int n, int m) {
	int res = 1;
    while(n>0)
    {
        if(n&1)
        {
            res = (1LL*(res) * (x)%m)%m; // typecasting to long long int using 1LL
        }
        x = (1LL*(x)%m * (x)%m)%m;
        n = n>>1; // It means n = n/2;
    }
    return res;
}
*/