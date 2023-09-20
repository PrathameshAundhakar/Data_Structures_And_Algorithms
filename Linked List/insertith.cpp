#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};

Node* takeinput(){
    //take input for linked list
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while (data!=-1)
    {
        Node *newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        cin>>data;
    }
    return head ;
    
    
}
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
Node* ithnode(Node *head,int n,int data){
    int count=1;
    Node *temp=head;
    cout<<"Enter the data"<<endl;
    cin>>data;
    while(temp!=NULL){
        temp=temp->next;
        count++;
        if(count==n){
            Node *newnode=new Node(data);
            newnode->next=temp->next;
            temp->next=newnode;
        }
    }
    return head;
}
//insert at ith node in linkedlist




int main(){
    Node *n1=takeinput();
    print(n1);
    int x,data;
    cout<<"Enter the node number"<<endl;
    cin>>x;
    ithnode(n1,x,data);
    print(n1);
}