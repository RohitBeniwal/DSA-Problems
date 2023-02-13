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
        int data=x;
        next=NULL;
    }
};

Node *insertEnd(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL){
        return temp;
    }
    else{
        Node *curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp;
        return head;
    }
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    Node *head=NULL;
    head=insertEnd(head,10);
    return 0;
}