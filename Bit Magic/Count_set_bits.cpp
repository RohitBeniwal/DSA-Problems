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
    ll n;
    cin>>n;

    //Brian Kerningam's Algo
    // ll ans=0;
    // while(n){
    //     n=n&(n-1);
    //     ans++;

    // }
    // cout<<ans<<endl;

    //Lookup Table Solution
    ll table[256];
    table[0]=0;
    for(int i=1;i<256;i++){
        table[i]=table[i&(i-1)]+1;
    }
    ll ans=table[n&255]+table[n>>8&255]+table[n>>16&255]+table[n>>24];
    cout<<ans<<endl;
    return 0;
}