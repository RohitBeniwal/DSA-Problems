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

bool DFSRec(adj,s,visited,parent){
    visited[s]=true;

    for(int u:adj[s]){
        if(visited[u]==false){
            if(DFS(adj,u,visited,s)==true){
                return true;
            }
        }
        else if(u!=parent){
            return true;
        }
    }
    return false;
}

bool DFS(adj,int v){
    bool visited[v]={false};
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            if(DFS(adj,i,visited,-1)==true){
                return true;
            }
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