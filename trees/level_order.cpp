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

//Brute force method can be using 2 functions at a time height of tree & print nodes at distance k.... but this will cost bigO(h*n)
//the better approach is using queue data structure which has bigO(n) time complexity
//time complexity can be said as theta(n) because we have to perform enqueue dequeue at every node
//space complexity is bigO(n) at every instant the auxiliary space required is eaual to width of level   theta(w)


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

void level_order(Node *root){
    if(root==NULL){
        return;
    }
    queue<Node *> q;
    while(!q.empty()){
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
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    
    return 0;
}