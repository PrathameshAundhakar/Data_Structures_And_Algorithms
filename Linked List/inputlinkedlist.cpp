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
int ithnode(Node *head,int n){
    int count=1;
    int y;
    Node *temp=head;
    while(temp!=NULL){
        if(count==n){
            y=temp->data;
        }
        count++;
        temp=temp->next;
        
    }
    return y;
}

int main(){
    Node *n1=takeinput();
    print(n1);
    int x;
    cout<<"Enter the node number"<<endl;
    cin>>x;
    int n= ithnode(n1,x);
    cout<<n<<endl;
}