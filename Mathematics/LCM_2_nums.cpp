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
    //the gcd*lcm=product of the numbers
    ll a,b;
    cin>>a>>b;
    ll product=a*b;
    while(a!=b){
        if(a>b) a=a-b;
        else b=b-a;
    }
    cout<<product/a<<endl;
    return 0;
}