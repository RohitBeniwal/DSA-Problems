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

//time complexity bigO(n)
//space complexity bigo(h)

struct Node{
    int key;
    Node *left;
    Node *right;
};

bool isSum(Node *root){
    if(root==NULL){
        return true;
    }
    if(root->left==NULL && root->right==NULL){
        return true;
    }
    int sum=0;
    if(root->left!=NULL) sum+=root->left->key;
    if(root->right!=NULL) sum+=root->right->key;
    return (root->key==sum && isSum(root->left) && isSum(root->right));
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    
    return 0;
}