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

//time complexity bigO(n+h) which can be approximated as bigO(n) as h is lower order term
//ans auxiliary space is theta(w) w-width of level which can also be written as bigo(n)

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

void traversal(Node *root){
    if(root==NULL){
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        Node *curr=q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            q.push(NULL);
            continue;
        }
        cout<<curr->key<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    
    return 0;
}