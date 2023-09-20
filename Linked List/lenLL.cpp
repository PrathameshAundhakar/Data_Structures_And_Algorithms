#include<bits/stdc++.h>

using namespace std;

int lengthLL(Node *head){
    if(head==NULL){
        return 0;
    }
    int smallans=lengthLL(head->next);

    return 1+smallans;
}
int length(Node* head){
    int count=0;
    Node *temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;


}

int main(){
    Node *head=takeinput();
    print(head);
    cout<<lengthLL(head)<<endl;

}