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
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
typedef long long int ll;
typedef long double lld;

using namespace std;

// Time bigO(n)
// Space bigO(h)

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
};

void preorder(Node *root){
    if(root!=NULL){cout<<root->key<<" ";
    preorder(root->left);
    preorder(root->right);}
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    
    return 0;
}