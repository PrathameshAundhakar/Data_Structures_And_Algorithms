#include<bits/stdc++.h>
using namespace std;


class TreeNode{
    public:
    int data;
    vector<TreeNode*> children;
    TreeNode(int data){
        this->data=data;
    }
};

TreeNode* takeinput(){
    int rootdata;
    cout<<"Enter data"<<endl;
    cin>>rootdata;
    TreeNode* root=new TreeNode(rootdata);
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode* f=q.front();
        q.pop();
        int n;
        cout<<"Enter no of children of "<<f->data<<endl;
        cin>>n;
        for(int i=0;i<n;i++){
            int childData;
            cout<<"Enter "<<i<<"th child of "<<f->data<<endl;
            cin>>childData;
            TreeNode* child=new TreeNode(childData);
            f->children.push_back(child);
            q.push(child);
        }
    }
    return root;
    
}

int countleaf(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    if(root->children.size()==0){
        return 1;
    }
    int ans=0;
    for(int i=0;i<root->children.size();i++){
        ans+=countleaf(root->children[i]);
    }
    return ans;
}

void preorder(TreeNode* root){
    if(root=NULL){
        return;
    }
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++){
        preorder(root->children[i]);
    }
    
}


int main(){
    TreeNode* root=takeinput();
    cout<<countleaf(root);
}