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

void setbit(ll &n,ll i){
    n=n|(1<<i);
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
    setbit(n,i);
    cout<<n<<endl;
    return 0;
}