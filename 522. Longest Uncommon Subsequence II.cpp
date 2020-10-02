class Solution {
public:
    
  bool LCS(const string& a, const string& b) {
    
	if (b.size() < a.size()) return false;
    
	int i = 0;
    for(auto ch: b) {
		if(i < a.size() && a[i] == ch) 
            i++;
    }
    return i == a.size();
        
    }
    
    int findLUSlength(vector<string>& strs) {
       
        if (strs.empty()) return -1;
        
        int rst = -1;     //result
        
        for(auto i = 0; i < strs.size(); ++i) {
            int j = 0;
            
            for(; j < strs.size(); ++j) {
                
                if(i==j) 
                    continue;
                
                if(LCS(strs[i], strs[j])) 
                    break;                      // strs[j] is a subsequence of strs[i]
            }
            
            // strs[i] is not any subsequence of the other strings.
            if(j==strs.size()) 
                rst = max(rst, static_cast<int>(strs[i].size()));
        }
        return rst;
    
    }
};

/*
        i=1
"aba", "cdcd", "eae"   i-abc   j- cdc  eae 0 1 2 3  r=3  
        ^       ^      i-cdcd  j- aba  eae 0 1 2 3  r=max(3,4 ) =4   m(4,3) =4
    */




/*
a=aab   b=aab\0       1=0 1 2 3      3=3  true     */
              
