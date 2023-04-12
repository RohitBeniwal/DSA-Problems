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

//naive solution can be using another function of height and then using conditions for height differences but the time complexity is bigO(n^2)

//time complexity bigO(n)

struct Node{
    int key;
    Node *left;
    Node *right;
};

int isBalanced(Node *root){
    if(root==NULL) return 0;
    int lh=isBalanced(root->left);
    if(lh==-1) return -1;
    int rh=isBalanced(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    else return max(lh,rh)+1;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    
    return 0;
}