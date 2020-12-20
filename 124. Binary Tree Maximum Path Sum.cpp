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
     int maxPathSumUtil(TreeNode* root, int &result){
        if(root == NULL)
            return 0; 
        
        int left = maxPathSumUtil(root->left, result); 
        int right  = maxPathSumUtil(root->right, result); 
    
        int ms = max(max(left,right)+root->val,root->val); 
    
        int m21 = max(ms, left + right + root->val); 
    
        result = max(result, m21); 
        
        return ms; 
    }
    
    int maxPathSum(TreeNode* root) {
        if(root == NULL)
             return 0; 
        
        int result = INT_MIN; 
        maxPathSumUtil(root, result);
        
        return result; 
    }
    
};
