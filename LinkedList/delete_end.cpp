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

Node *deleteEnd(Node *head){
    if(head==NULL) return NULL;
    if(head->next==NULL){
        delete(head);
        return NULL;
    }
    Node *temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=NULL;
    return head;
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    Node *head=new Node(10);
    head=deleteEnd(head);
    return 0;
}