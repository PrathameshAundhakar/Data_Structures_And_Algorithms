#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BTNode
{
public:
    T data;
    BTNode *left;
    BTNode *right;

    BTNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~BTNode()
    {
        delete left;
        delete right;
    }
};

BTNode<int> *levelinput()
{
    int rootdata;
    cout << "Enter root data";
    cin >> rootdata;
    BTNode<int> *root = new BTNode<int>(rootdata);
    int data;
    queue<BTNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        // int n;
        BTNode<int> *a = q.front();
        q.pop();

        cout << "ENter left child of " << a->data;
        int leftchilddata;
        cin >> leftchilddata;
        if (leftchilddata != -1)
        {
            BTNode<int> *l = new BTNode<int>(leftchilddata);
            q.push(l);
            a->left = l;
        }
        cout << "enter the right child of " << a->data;
        int rightchilddata;
        cin >> rightchilddata;
        if (rightchilddata != -1)
        {
            BTNode<int> *r = new BTNode<int>(rightchilddata);
            q.push(r);
            a->right = r;
        }
    }
    return root;
}
int countleaf(BTNode<int>* root){
    if(root==NULL){
        return 0;
    }

    if(root->left==NULL && root->right== NULL){
        return 1;
    }

    return countleaf(root->left)+countleaf(root->right);
}
int main(){
    BTNode<int>* root=levelinput();
    int ans=countleaf(root);
    cout<<ans;
}