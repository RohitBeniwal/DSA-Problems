#include<bits/stdc++.h>
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
typedef long long int ll;

using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};

Node *insertBegin(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL){
        return temp;
    }
    temp->next=head;
    head->prev=temp;
    return temp;
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    
    return 0;
}