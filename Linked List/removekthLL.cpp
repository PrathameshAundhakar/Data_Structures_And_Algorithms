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
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;

    while(data!=-1){
        Node* newNode=new Node(data);
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
Node* removekth(Node* head,int k){
    Node* one=head;
    Node* two=head;
    while(k--){
        two=two->next;
    }
    while(two->next!=NULL){
        one=one->next;
        two=two->next;
    }
    one->next=one->next->next;
    return head;
}

int main(){
    Node* head=takeinput();
}