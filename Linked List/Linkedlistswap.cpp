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
    cout<<"Enter the data:"<<endl;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
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
void print(Node *head){
    cout<<head->data<<"->";
    Node *temp=head->next;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

Node* swapnodes(Node *head,int p,int q){
    // Node *temp1=head;
    // Node *temp2=head;
    // Node *prev1=NULL;
    // Node *prev2=NULL;
    // while(temp1!=NULL && temp2!=NULL){
    //     prev1=temp1;
    //     temp1=temp1->next;
    //     prev1->next=temp1;
    //     prev2=temp2;
    //     temp2=temp2->next;
    //     prev2->next=temp2;;
    //     if(temp1->data==p){
    //         Node *n1=temp1;
    //     }
    //     if(temp1->data==q){
    //         Node *n2=temp2;
    //     }
    //     n2->next=temp1->next;
    //     n1->next=temp2->next;
    //     prev1->next=n2;
    //     prev2->next=n1;
    // }
    // return head;
    Node *temp1=head;
    Node *temp2=head;
    Node *prev1=NULL;
    Node *prev2=NULL;
    while(temp1!=NULL && temp1->data!=p){
        prev1=temp1;
        temp1=temp1->next;
    }
    while(temp2!=NULL && temp2->data!=q){
        prev2=temp2;
        temp2=temp2->next;
    }
    if(temp1==NULL || temp2==NULL){
        return head;
    }
    if(prev1!=NULL){
        prev1->next=temp2;
    }
    else{
        head=temp2;
    }
    if(prev2!=NULL){
        prev2->next=temp1;
    }
    else{
        head=temp1;
    }
    Node *temp=temp1->next;
    temp1->next=temp2->next;
    temp2->next=temp;
    return head;

}

int main(){
    Node *head=takeinput();
    print(head);
    int p,q;
    cout<<"Enter the nodes to be swapped:"<<endl;
    cin>>p>>q;
    head=swapnodes(head,p,q);
    print(head);
    
}