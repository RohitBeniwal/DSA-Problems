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
    //efficient solution but not in sorted order
    // for(int i=1;i*i<=n;i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //         if(i!=n/i){
    //             cout<<n/i<<" ";
    //         }
    //     }
    // }
    // cout<<endl;

    //efficient solution in sorted order
    int i;
    for(i=1;i*i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for(;i>=1;i--){
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
    cout<<endl;
    return 0;
}