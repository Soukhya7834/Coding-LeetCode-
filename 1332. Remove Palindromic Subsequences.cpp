class Solution {
public:
    int removePalindromeSub(string str) {
        int n = str.size();
       
        
        if(n==0)    return 0;
        
        string res = str;
        reverse(str.begin(), str.end());
        
        if (res == str)
            return 1;
        
        return 2; 
  
    }
}; 
