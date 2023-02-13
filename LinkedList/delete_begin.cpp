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

Node *deleteBegin(Node *head){
    if(head==NULL){
        return NULL;
    }
    Node *temp=head->next;
    delete head;
    return temp;
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    Node *head=new Node(10);
    head->next=new Node(20);
    head=deleteBegin(head);
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}