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

int maxvalue(BTNode<int> *root)
{
    if (root == NULL)
    {
        return INT_MIN;
    }

    int leftmin = maxvalue(root->left);
    int rightmin = maxvalue(root->right);

    return max(root->data, max(leftmin, rightmin));
}

void maxvalue2(BTNode<int>* root,int &ans){
    if(root==NULL){
        return;
    }

    ans=max(ans,root->data);
    maxvalue2(root->left,ans);
    maxvalue2(root->right, ans);
}

int main()
{
    BTNode<int> *root = levelinput();
    int ans = maxvalue(root);
    cout << ans<<endl;;
    int maxval=INT_MIN;
    maxvalue2(root,maxval);
    cout<<maxval;
}