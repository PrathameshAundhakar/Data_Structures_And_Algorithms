#include<bits/stdc++.h>
using namespace std;
template<typename T>
class BTNode{
    public:
    T data;
    BTNode* left;
    BTNode* right;
    BTNode(T data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~BTNode(){
        delete left;
        delete right;
    }
};

BTNode<int>* input(){
    int rootdata;
    cout<<"enter data";
    cin>>rootdata;
    if(rootdata==-1){
        return NULL;
    }
    BTNode<int>* root=new BTNode<int>(rootdata);
    
    BTNode<int>* leftchild=input();
    BTNode<int>* rightchild=input();

    root->left=leftchild;
    root->right=rightchild;

    return root;
}


void print(BTNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left!=NULL){
        cout<<"L"<<root->left->data<<" ";
    }
    if(root->right!=NULL)
    {
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}

int main(){
    // BTNode<int>* root=new BTNode<int>(1);
    // BTNode<int>* n1=new BTNode<int>(2);
    // BTNode<int>* n2=new BTNode<int>(3);

    // root->left=n1;
    // root->right=n2;
    BTNode<int>* root=input();
    print(root);

    delete root;
    return 0;

}