class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;

        char res;
        for(auto x: t){
            m1[x]++;
        } 
        
         for(auto x: s){
            m2[x]++;
        } 
        
        for(auto x: t){
            if(m2[x] != m1[x])
                return x;
        }
        
        return res;
    }
};
