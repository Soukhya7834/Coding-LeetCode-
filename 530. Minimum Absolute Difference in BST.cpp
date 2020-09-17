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
    void in(TreeNode* root, vector<int>& res) {
        
        if (root == NULL) return;
        
        in(root->left, res);
        res.push_back(root->val);           //1 2 3 
        in(root->right, res);
    }
   
    int getMinimumDifference(TreeNode* root) {
        
        if (root == NULL) return 0;
        
        vector<int> res;
        int diff=0, mini = 99999;
        in(root, res);
        // as its a BST , the vector will already be in sorted order now, for a normal tree, just sort the vector
        //sort(res.begin(), res.end());
        
        for(int i =0; i<res.size()-1; i++){
              diff = abs(res[i] - res[i+1]);
            if (diff < mini)
                mini=diff;
        }
        
        return mini;
    }
};
