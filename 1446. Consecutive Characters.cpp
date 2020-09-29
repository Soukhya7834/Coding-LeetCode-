class Solution {
public:
    int maxPower(string s) {
        
        if(s.size() == 0)
            return 0;
        int ans =1, cnt =1;
        for(int i =1;i<s.length();i++){
    
        if(s[i]==s[i-1]) 
            ans = max(ans, ++cnt);
        else 
            cnt =1;             //reset cnt everytime you find a new unique char
        }
        return ans;
    }
};
