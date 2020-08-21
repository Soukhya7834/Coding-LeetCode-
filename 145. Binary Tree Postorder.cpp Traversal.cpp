class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int> res;
        TreeNode* p = root;
            
        while(p || !st.empty()){
        if(p)
            st.push(p);
            p = p->left;
        }
        p = st.top();
         if(p->right){
            p = p->right;
        }
        
    
        
        res.push_back(st.top());
        
        st.pop();
        p = st.top();
        p = p->right;
        
       
        res.push_back(st.top());
         st.pop();
        p = st.top();
        
        res.push_back()
        return res;
    }
};


