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

BTNode<int>* levelinput(){
    int rootdata;
    cout<<"Enter root data";
    cin>>rootdata;
    BTNode<int>* root=new BTNode<int>(rootdata);
    int data;
    queue<BTNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        // int n;
        BTNode<int>* a=q.front();
        q.pop();

        cout<<"ENter left child of "<<a->data;
        int leftchilddata;
        cin>>leftchilddata;
        if(leftchilddata!=-1){
            BTNode<int>* l=new BTNode<int>(leftchilddata);
            q.push(l);
            a->left=l;
        }
        cout<<"enter the right child of "<<a->data;
        int rightchilddata;
        cin>>rightchilddata;
        if(rightchilddata!=-1){
            BTNode<int>* r=new BTNode<int>(rightchilddata);
            q.push(r);
            a->right=r;
        }

    }
    return root;
}

int minvalue(BTNode<int>* root){
    if(root==NULL){
        return INT_MAX;
    }

    int leftmin=minvalue(root->left);
    int rightmin=minvalue(root->right);

    return min(root->data,min(leftmin,rightmin));

}

void minvalue2(BTNode<int>* root,int &ans){
    if(root==NULL){
        return;
    }

    ans=min(ans,root->data);
    minvalue2(root->left,ans);
    minvalue2(root->right,ans);

}


int main(){
    BTNode<int>* root=levelinput();
    int m=minvalue(root);
    cout<<"Minvalue1"<<endl;
    cout<<m<<endl;;
    int ans=INT_MAX;
    minvalue2(root,ans);
    cout<<"Minvalue2"<<endl;
    cout<<ans;
}


