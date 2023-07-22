/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int mx = 0;
int maxHeight(TreeNode<int>* root)
{
    if(!root) return 0;
    int left = maxHeight(root -> left);
    int right = maxHeight(root -> right);
    int diameter = left + right;
    mx = max(mx , diameter);
    return max(left , right) + 1;
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	mx = 0;
    int h = maxHeight(root); 
    //maxHeight function integer return kore tai 
    //integer recieve korar jonno h name ekta extra variable niyechi.
    return mx;
}
