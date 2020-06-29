/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
     vector<int> preorder(Node* root) {
        vector <int> result;
        if(!root)
            return result;
        result.push_back(root->val);
        for(auto x: root->children){
                vector <int> childPreorder = preorder(x);
                result.insert(result.end(), childPreorder.begin(), childPreorder.end());
            }     
        return result;
    }
        
    
};
