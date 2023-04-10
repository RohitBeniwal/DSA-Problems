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

Node *insertPos(Node *head,int pos,int data){
    Node *temp=new Node(data);
    if(head==NULL){
        temp->next=head;
        return temp;
    }
    Node *curr=head;
    for(int i=0;i<pos-2 && curr!=NULL;i++){
        curr=curr->next;
    }
    if(curr==NULL){
        return head;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    
    return 0;
}