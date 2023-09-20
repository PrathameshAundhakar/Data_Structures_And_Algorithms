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

Node* reverseLL(Node* head){
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL){
        Node* n=curr->next;
        curr->next=prev;
        prev=curr;
        curr=n;
    }

    return prev;

}

int main(){
    Node* head=takeinput();
}