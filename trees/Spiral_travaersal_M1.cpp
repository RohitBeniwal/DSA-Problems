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

struct Node{
    int key;
    Node *right;
    Node *left;
    Node(int k){
        key=k;
    }
};

void spiral_traversal(Node *root){
    if(root==NULL) return;
    queue<Node *> q;
    stack<int> s;
    q.push(root);
    bool reverse=false;
    while(!q.empty()){
        int count=q.size();

        for(int i=0;i<count;i++){
        Node *curr=q.front();
        q.pop();

        if(reverse){
            s.push(curr->key);
        }
        else{
            cout<<curr->key<<" ";
        }
        if(curr->right!=NULL) q.push(curr->right);
        if(curr->left!=NULL) q.push(curr->left);
        }
        if(reverse){
            while(!s.empty()){
                cout<<s.top()<<" ";
                s.pop();
            }
        }
        reverse=!reverse;
        cout<<endl;
        
    }
}

void solve(){

}

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

ll T;
cin>>T;
while(T--){
solve();
}
    
    return 0;
}