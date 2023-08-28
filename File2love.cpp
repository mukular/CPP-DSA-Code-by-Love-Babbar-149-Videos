#include<iostream>
using namespace std;

int main(){
    cout<< "Namaste Dunia :-) " <<endl;
    cout<< "Main Love babbar hu" <<'\n';
    cout<< "Main Love babbar hu\n";
    cout<< "Main Love babbar hu";
    cout<< "Main Love babbar hu";
    cout<<"\n";
    cout<< "Main Love babbar hu" <<endl;

    int a = 123;
    cout<< a <<endl;
    char b = 'v'; // char me single character hi ho sakta h inverted comma me
    cout<< b <<endl;
    bool bl = true;
    cout<< bl <<endl;
    bool b2= 0;
    cout<<b2<<endl;
    float f = 1.2;
    cout << f << endl;
    double d = 1.23;
    cout<< d << endl;

    int size = sizeof(a);
    cout<<"Size of a is :"<< size<<endl;
    int size2 = sizeof(d);
    cout<<"Size of d is :"<< size2<<endl;

    /*
    comment
    */
   int e = 'a';
   cout<<e<<endl;
   char ch = 98;
   cout<<ch<<endl;
   char ch1 = 123456;
   cout<< ch1 <<endl;

   unsigned h = 112;
   cout<< h << endl;
   unsigned i = -112;
   cout<< i << endl;

   int j = 2/5; // int divide by int gives int
   cout<<j<<endl;
   int k = 2.0/5;
   cout<<k<<endl;
   cout<< 2.0/5 <<endl;

   int l = 2;
   int m = 3;
   bool first = (l==m);
   cout<<first<<endl;
   bool second = (l>m);
   cout<<second<<endl;
   bool third = (l<m);
   cout<<third<<endl;
   bool fourth = (l>=m);
   cout<<fourth<<endl;
   bool fifth = (l<=m);
   cout<<fifth<<endl;
   bool sixth = (l!=m);
   cout<<sixth<<endl;

    int n = 21;
    cout<<!n<<endl; // ! true ka false and false ka true kar dega

    int p = 0;
    cout<<!p<<endl;
}