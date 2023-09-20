#include<bits/stdc++.h>
using namespace std;
template<typename T>
class BTnode{
    public:
    T data;
    BTnode* left;
    BTnode* right;

    BTnode(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~BTnode(){
        delete left;
        delete right;
    }
};

BTnode<int>* levelinput(){
    int rootdata;
    cout<<"Enter root data";
    cin>>rootdata;
    BTnode<int>* root=new BTnode<int>(rootdata);
    int data;
    queue<BTnode<int>*> q;
    q.push(root);
    while(!q.empty()){
        // int n;
        BTnode<int>* a=q.front();
        q.pop();

        cout<<"ENter left child of "<<a->data;
        int leftchilddata;
        cin>>leftchilddata;
        if(leftchilddata!=-1){
            BTnode<int>* l=new BTnode<int>(leftchilddata);
            q.push(l);
            a->left=l;
        }
        cout<<"enter the right child of "<<a->data;
        int rightchilddata;
        cin>>rightchilddata;
        if(rightchilddata!=-1){
            BTnode<int>* r=new BTnode<int>(rightchilddata);
            q.push(r);
            a->right=r;
        }

    }
    return root;
}
void levelorder(BTnode<int>* root){
    queue<BTnode<int>*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        BTnode<int>* f=q.front();
        q.pop();
        if(f==NULL){
            cout<<endl;
        }
        if(f!=NULL){
            q.push(NULL);
        }
        cout<<f->data;
        if(f->left){
            q.push(f->left);
        }
        if(f->right){   
            q.push(f->right);
        }
        
    }
}


int main(){

}