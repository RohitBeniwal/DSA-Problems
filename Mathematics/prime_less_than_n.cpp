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
    //sieve of eratosthenes method
    
    //simple implementation
    // ll n;
    // cin>>n;
    // vector<bool> isprime(n+1,true);
    // for(int i=2;i*i<=n;i++){
    //     if(isprime[i]){
    //         for(int j=2*i;j<=n;j+=i){
    //             isprime[j]=false;
    //         }
    //     }
    // }
    // for(int i=2;i<=n;i++){
    //     if(isprime[i]){
    //         cout<<i<<" ";
    //     }
    // }
    // cout<<endl;
    
    //efficient implementaion
    ll n;
    cin>>n;
    vector<bool> isprime(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(isprime[i]){
            for(int j=i*i;j<=n;j+=i){
                isprime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(isprime[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}