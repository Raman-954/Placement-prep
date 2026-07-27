class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr){
            return root;
        }
        TreeNode* lp = invertTree(root->left);
     TreeNode* rp=   invertTree(root->right);
        root->left=rp;
        root->right=lp;
        return root;
    }
};
