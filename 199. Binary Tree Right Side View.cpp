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
void right( TreeNode *root, int level, int *ml, vector<int> &res){
    
    if (root == NULL) return; 
    // If this is the last Node of its level 
    
    if (*ml < level) 
    { 
        res.push_back(root->val); 
        *ml = level; 
    } 
  
    // Recur for right subtree first,  
    // then left subtree 
    right(root->right, level + 1, ml, res); 
    right(root->left, level + 1, ml, res); 
}
    
    
vector<int> rightSideView(TreeNode* root) {
    // Your Code here
   vector<int> res;
   int ml = 0;
   right(root, 1, &ml, res);
   return res;
    }
};
