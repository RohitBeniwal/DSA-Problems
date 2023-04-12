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

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
};

void printLevelOrder(Node *root){
    if(root==NULL){
        return;
    }
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        int count=q.size();
        for(int i=0;i<count;i++){
        Node *curr=q.front();
        q.pop();
        cout<<curr->key<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
        }
        cout<<endl;
    }
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    
    return 0;
}