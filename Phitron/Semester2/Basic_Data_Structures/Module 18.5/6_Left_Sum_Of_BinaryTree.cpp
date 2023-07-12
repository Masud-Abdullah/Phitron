#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/


long long leftSum(BinaryTreeNode<int> *root)
{
	// Write your code here.
	if(root==NULL)return 0;

	long long sum = 0;
	queue<BinaryTreeNode<int>*> q;
	q.push(root);
	while(!q.empty())
	{
		BinaryTreeNode<int>* parent;
		parent=q.front();
		q.pop();
		
		if(parent->left!=NULL)
		{
			sum+=parent->left->data;
		}
		if(parent->left)
		{
			q.push(parent->left);
		}

		if(parent->right)
		{
			q.push(parent->right);
		}
	} 
	return sum;
}