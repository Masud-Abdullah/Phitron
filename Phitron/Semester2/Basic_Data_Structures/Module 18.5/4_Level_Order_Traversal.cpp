#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> v;
void level_Order(BinaryTreeNode<int>* root)
{
    if(root==NULL)return;
    // Level Order print a queue use korte hobe.
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty())
    {
        // 1. ber kore ana
        BinaryTreeNode<int>* parent=q.front();
        q.pop();
        // 2. Jabotiyo kaj kora
        v.push_back(parent->val);
        // 3. tar children guloke rakha
        if(parent->left)
        {
            q.push(parent->left);
        }
        
        if(parent->right)
        {
            q.push(parent->right);
        }
    }
}
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    v.clear();
    level_Order(root);
    return v;
}