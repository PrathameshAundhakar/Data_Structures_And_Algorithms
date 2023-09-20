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
    Node* head=NULL;
    Node* tail=NULL;
    int data;
    cin>>data;
    while(data!=-1){
        Node *newNode= new Node(data);
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
    return head;
}

Node* middle(Node* head){
    Node* s=head;
    Node* f=head->next;
    while(f && f->next!=NULL){
        s=s->next;
        f=f->next->next;
    }
    if(f==NULL){
        return s;
    }
    else{
        return s->next;
    }
    
   
}
int main(){
    Node *head=takeinput();
    middle(head);
}