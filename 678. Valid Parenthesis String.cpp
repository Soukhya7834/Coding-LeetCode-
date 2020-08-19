class Solution {
public:
    bool checkValidString(string s) {
        stack<char> st;
        stack<char> ast;

        int n = s.size();
        
        
        for(int i = 0; i<n; i++){
            if(s[i] == '(')
                st.push(i);
            if(s[i] == '*')
                ast.push(i);
            if(s[i] == ')'){
                if(!st.empty())
                    st.pop();
                else if(!ast.empty())
                    ast.pop();
                else 
                    return false;
            }
        }
               
        while(!st.empty() && !ast.empty()){
            if(st.top() > ast.top())
                return false;
            st.pop(); ast.pop();
        }
        
        if(st.empty())
            return true;
        else
            return false;
    }
};
