class Solution {
public:
    bool isSubsequence(string s, string t) {
        // 2 pointer approach
        
        int tp=0, sp=0;
        
        while (tp<t.size()){
            if(s[sp] == t[tp])
                sp++;
            tp++;
    }
    return (sp == s.size());
        
    }
};
