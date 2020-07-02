/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        
        if(!root)
            return true;
        bool flag = true;
        
        if(root->left)
            flag&= root->left->val == root->val;
        if(root->right)
            flag&= root->right->val == root->val;

                
        flag&= isUnivalTree(root->left);
        flag&= isUnivalTree(root->right);
        
        return flag;
    }
};
