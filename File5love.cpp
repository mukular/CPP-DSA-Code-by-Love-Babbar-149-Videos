#include<iostream>
using namespace std;

int main()
{

    int a = 4;
    int b = 6;

    cout<<" a & b "<< (a&b) << endl;
    cout<<" a | b "<< (a|b) << endl;
    cout<<" ~a  "<< (~a )<< endl;
    cout<<" a ^ b "<< (a^b) << endl;

    cout<< (17>>1) <<endl;
    cout<< (17>>2) <<endl;
    cout<< (19<<1) <<endl;
    cout<< (21<<2) <<endl;

    int i = 7;
    cout<< (++i) << endl;
    cout<< (i++) << endl;
    cout<< (i--) << endl;
    cout<< (--i) << endl;

    int n;
    cout<<" enter the value of n" <<endl;
    cin>>n;

    cout<<"printing count from 1 to n"<<endl;

    for(int j = 1; j<=n; j++){
        cout<< j << endl;
    }

    int k = 1;
    for(; k<=n; k++){
        cout<< k << endl;
    }

    int l = 1;
    for(; l<=n; ){
        cout<< l << endl;
        l++;
    }
    
    int m = 1;
    for(; ; ){
        if(m<=n){
        cout<< m << endl;
        }
        else{
            break;
        }
        m++;
    }

    for(int u = 0, v = 1, c = 2; u>=0 && v>=1 && c>=2; u--, v--, c--){
        cout<<u <<" "<<v << " "<< c << endl;
    }
// print sum of numbers from 1 to n
int sum = 0;
    for(int z = 1; z <= n; z++){
        sum+=z;
    }
    cout<<sum<<endl;
}