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
void print(Node* head){
    Node *temp=head;
    cout<<temp->data<<"->";

    while(temp!=NULL){
        temp=temp->next;
        cout<<temp->data<<"->";
    }
    cout<<"NULL"<<endl;
}
//space complexity is O(n) and time complexity is O(n)
// bool search_recur(Node* head ,int key){
//     if(head==NULL){
//         return false;
//     }
//     if(head->data==key){
//         return true;
//     }
//     int smallans=search(head->next,key);
//     return smallans;
// }


//space complexity is O(1) and time complexity is O(n)
bool search(Node *head ,int key){
    Node *temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main(){
    Node *head=takeinput();
    //print(head);
    int key;
    cin>>key;
    search(head,key);
    if(search(head,key)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}