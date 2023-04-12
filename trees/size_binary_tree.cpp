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
//space complexity bigO(h) because max calls at some moment is h+1

//we can do it iteratively as well using level order traversal but in that case auxiliary space would be theta(w)

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
};

int size(Node *root){
    if(root==NULL) return 0;
    return (size(root->left)+size(root->right)+1);
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    
    return 0;
}