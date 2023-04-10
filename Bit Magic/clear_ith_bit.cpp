#include<bits/stdc++.h>
#define MOD 1000000007
#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define vll vector<ll>
#define pll pair<ll,ll>
typedef long long int ll;
typedef long double lld;

using namespace std;

ll clear_ith_bit(ll n,ll i){
    return ~(1<<i)&n;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    ll n;
    cin>>n;
    ll i;
    cin>>i;
    cout<<clear_ith_bit(n,i)<<endl;
    return 0;
}