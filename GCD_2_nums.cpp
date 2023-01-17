#include<bits/stdc++.h>
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
typedef long long int ll;

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    //naive approach would be to start with smaller number and decrease it till we get a common divisor

    //Euclid's algo
    // The gcd(a,b)=gcd(a-b,b)
    ll a,b;
    cin>>a>>b;
    while(a!=b){
        if(a>b) a=a-b;
        else b=b-a;
    }
    cout<<a<<endl;

    // Optimized implementation
    // int gcd(int a,int b){
    //     if(b==0){
    //         return a;
    //     }
    //     else{
    //         return gcd(b,a%b);
    //     }
    // }
    return 0;
}