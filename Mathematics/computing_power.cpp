#include<bits/stdc++.h>
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
typedef long long int ll;

using namespace std;

ll power(ll x,ll y){
    if(y==0){
        return 1;
    }
    if(y==1){
        return x;
    }
    if(y%2){
        return power(x,y-1)*power(x,1);
    }
    else{
        return power(x,y/2)*power(x,y/2);
    }
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    ll x,y;
    cin>>x>>y;
    cout<<power(x,y)<<endl;
    return 0;
}