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

//time complexity bigO(n) because we traverse each node in constant time
//space complexity bigO(h) because in worst case the recursive call stack will have h+1 values


struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
};

int height(Node *root){
    if(root==NULL){
        return 0;
    }
    else{
        return max(height(root->left),height(root->right))+1;
    }
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    
    return 0;
}