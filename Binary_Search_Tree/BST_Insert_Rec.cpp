#include<bits/stdc++.h>
#define MOD 1000000007
#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define vll vector<ll>
#define pll pair<ll,ll>
#define all(x) (x).begin(), (x).end()
#define mp make_pair
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
typedef long long int ll;
typedef long double lld;

using namespace std;

template <typename T>
vector<T> slicing(vector<T> const& v,
                  int X, int Y)
{
 
    auto first = v.begin() + X;
    auto last = v.begin() + Y + 1;
 
    vector<T> vector(first, last);
 
    return vector;
}

Node *insert(Node *root,int x){
    if(root==NULL){
        return new Node(x);
    }
    else if(root->key>x){
        root->left=insert(root->left,x);
    }
    else if{
        root->right=insert(root->right,x);
    }

    return root;
}

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    
    return 0;
}