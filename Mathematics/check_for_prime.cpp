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
    // let say x*y=n and x<=y then x<=sqrt(n)
    // ll n;
    // cin>>n;
    // ll ch=1;
    // for(int i=2;i*i<=(n);i++){
    //     if(n%i==0){
    //         cout<<"NO"<<endl;
    //         ch=0;
    //         break;
    //     }
    // }
    // if(n==1) cout<<"NO"<<endl;
    // else
    // if(ch)
    // cout<<"YES"<<endl;
    // return 0;

    ll n;
    cin>>n;
    if(n==1 || n==2 || n==3){
        cout<<"NO"<<endl;
    }
    else if(n%2==0 || n%3==0){
        cout<<"NO"<<endl;
    }
    else{
        ll c=1;
        for(int i=5;i*i<=n;i+=6){
            if((n%i)==0 && n%(i+2)==0){
                cout<<"NO"<<endl;
                c=0;
                break;
            }
        }
        if(c)
        cout<<"YES"<<endl;
    }

}