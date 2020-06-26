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
    int min =0;
    int inorder(TreeNode* root, TreeNode* left, TreeNode* right){
        //min = abs(temp - root->val);
        //int temp = root->val;
        
        if(root->left) inorder(root, root->left);
        min = abs(root->val - root->left->val);
    
        
        if(root->right) inorder(root, root->right);
        min = abs(root->val - root->right->val);
        
        
    return root;
    }
    
    int minDiffInBST(TreeNode* root) {
        inorder(root,left, right);
        return min;
    }
}; 
