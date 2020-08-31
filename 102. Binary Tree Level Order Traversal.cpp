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
    
    vector<vector<int>> ans;
        
   void dfs(TreeNode* root, int height){
        if(root == NULL)
            return;
        
        while(ans.size() <= height)
            ans.push_back(vector<int>());
        ans[height].push_back(root->val);
        
        dfs(root->left, height+1);
        dfs(root->right, height+1);
   }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        dfs( root, 0);
        return ans;
    }
};
