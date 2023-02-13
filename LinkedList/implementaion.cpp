#include<bits/stdc++.h>
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
typedef long long int ll;

using namespace std;

struct Node{
    int data;
    Node *next; //self referential structures
    Node(int x){       //constructor
        data=x;
        next=NULL;
    }
};

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

Node *head=new Node(10);
Node *temp1=new Node(20);
Node *temp2=new Node(30);
head->next=temp1;
temp1->next=temp2;

Node *temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl;
    
    return 0;
}