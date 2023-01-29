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
    //Binary Exponentiation
    ll x,y;
    cin>>x>>y;
    ll res=1;
    while(y>0){
        if(y%2){   //y&1 
            res=res*x;  // in case of modulo ()%m
        }
        x=x*x;   // in case of modulo ()%m
        y/=2;    //y>>1
    }
    cout<<res<<endl;
    return 0;
}