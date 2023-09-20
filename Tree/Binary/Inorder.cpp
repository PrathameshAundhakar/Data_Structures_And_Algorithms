#include<bits/stdc++.h>
using namespace std;

class BTnode{
    public:
    int data;
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

BTnode* takeinput(){
    int rootdata;
    cout<<"enter the root data";
    cin>> rootdata;
    BTnode* root=new BTnode(rootdata);
    queue<BTnode*> q;
    q.push(root);

    while(!q.empty()){
        BTnode* f=q.front();
        q.pop();
        int leftchilddata;
        cin>>leftchilddata;
        if(leftchilddata!=-1){
            BTnode* leftchild=new BTnode(leftchilddata);
            q.push(leftchild);
            f->left=leftchild;
        }
        int rightchilddata;
        cin>>rightchilddata;
        if(rightchilddata!=-1){
            BTnode* rightchild=new BTnode(rightchilddata);
            q.push(rightchild);
            f->right=rightchild;
        }

    }
    return root;
}


int main(){

}