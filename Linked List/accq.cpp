#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

Node* takeinput(){
    int data;
    cout<<"Enter the data";
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
        cout<<"Enter data";
        cin>>data;
    }
    return head ;

}

Node* addalternate(Node *head){
    if(head==NULL){
        return NULL;
    }
    Node* temp=head;
    temp=head->next->next;
    int a=head->data;
    int b=head->next->data;
    while(temp!=NULL){
        int c=temp->data;
        temp->data=temp->data+a;
        a=b;
        b=c;
        temp=temp->next;
    }

    return head;
}

void print(Node* head){
    if(head==NULL) return;
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;;
}



int main(){
    Node* head=takeinput();
    print(head);
    addalternate(head);
    print(head);
}