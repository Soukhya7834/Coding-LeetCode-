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
    bool isValidBST(TreeNode* root) {
        return check(root, NULL, NULL);
        
    }
    
    bool check(TreeNode* root, TreeNode* max, TreeNode* min){
        
        if(!root)
            return true;
        
        if(min && root->val <= min->val)
            return false;
        
        if(max && root->val >= max->val)
            return false;
        
        return (check(root->left, root, min) && check(root->right, max, root));
    }
        
};
//https://www.youtube.com/watch?v=TKvbwPIOGCM&ab_channel=TECHDOSE
