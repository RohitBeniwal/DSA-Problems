#include<bits/stdc++.h>
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
typedef long long int ll;

using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

// Iterative
// int pos(Node *head,int data){
//     Node *temp=head;
//     int count=1;
//     while(temp!=NULL){
//         if(temp->data==data){
//             return count;
//         }
//         temp=temp->next;
//         count++;
//     }
//     return -1;
// }

// Recursive
int pos(Node *head,int data){
    if(head==NULL) return -1;
    if(head->data==data){
        return 1;
    }
    else{
        int res=pos(head->next,data);
        if(res==-1) return -1;
        else return res+1;
    }
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    
    return 0;
}