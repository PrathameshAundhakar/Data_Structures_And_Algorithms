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
    Node *head=NULL;
    Node *tail=NULL;
    int data;
    cin>>data;
    while(data!=-1){
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
    return head;
}

void printlist(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout << temp->data << "->";
        temp=temp->next;
    }
    cout << "NULL" << endl;
}

Node* deleteithnode(Node *head,int i){
    int count=1;
    Node *temp=head;
    if(i==0){
        return head;
    }
    if(i==1){
        head=head->next;
        return head;
    }
    while(temp!=NULL && count<=i-1){
        temp=temp->next;
        count++;  
    }
    if(temp!=NULL && temp->next!=NULL){
        temp->next=temp->next->next;
    }
    
    return head;

}

int main(){
    Node *head=takeinput();
    printlist(head);
    int i;
    cin>>i;
    deleteithnode(head,i);
    printlist(head);
}