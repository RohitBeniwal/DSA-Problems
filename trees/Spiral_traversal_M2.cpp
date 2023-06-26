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

struct Node{
    int key;
    Node *right;
    Node *left;
    Node(int k){
        key=k;
    }
};

void traversal(Node *root){
    if(root==NULL) return;
    stack<Node *> s1;
    stack<Node *> s2;
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            Node *temp=s1.top();
            s1.pop();
            cout<<temp->key<<" ";
            if(temp->right) s2.push(temp->right);
            if(temp->left) s2.push(temp->left);

        }

        while(!s2.empty()){
            Node *temp=s2.top();
            s2.pop();
            cout<<temp->key<<" ";
            if(temp->left) s1.push(temp->left);
            if(temp->right) s1.push(temp->right);
        }
    }
}

template <typename T>
vector<T> slicing(vector<T> const& v,
                  int X, int Y)
{
 
    auto first = v.begin() + X;
    auto last = v.begin() + Y + 1;
 
    vector<T> vector(first, last);
 
    return vector;
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