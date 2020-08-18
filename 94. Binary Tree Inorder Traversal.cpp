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
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> res;
        inorder(root, res);

        return res ;
    }
    
        void inorder(TreeNode* root, vector<int>& res){
        if(root == NULL)
            return;
        
        inorder(root->left, res);
        
        res.push_back(root->val);
        
        inorder(root->right, res);
    
        //return;
        
    }
};


/*follow steps :

1. left
2. print
3. right    */

//ITERATIVE

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
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> res;
        stack<TreeNode* > st;

        while(root || !st.empty()){
            while(root){
                st.push(root);
                root = root->left;
            }
            root = st.top();
            st.pop();
            
            res.push_back(root->val);
            root = root->right;
        }
        
        return res;
        
    }
};


/*follow steps :

1. left
2. print
3. right    */
