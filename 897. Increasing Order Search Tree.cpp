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
    TreeNode* increasingBST(TreeNode* root) {
        
        if(!root)
            return NULL;
       
        TreeNode*  curr = NULL;
        inorder(root, &curr);
        return curr;
    }
        void inorder(TreeNode* curr, TreeNode** prev ){
            if(!curr) return ;
            
            inorder(curr->left, prev);
            *prev->left = NULL;
            *prev->right = curr;
            *prev = curr;
            inorder(curr->right, prev);
    }
};
