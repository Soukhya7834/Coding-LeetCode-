class Solution {
public:
    int romanToInt(string s) {
         int r;
        if(s.empty())
            return 0;a
        
            unordered_map<char, int> hash  = {{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500}, {'M', 1000}};
             r = hash[s.back()];
            //while(s!=0){
            for(int i=s.length()-2; i>=0; --i){
            r+= (hash[s[i]]>=hash[s[i+1]]) ? hash[s[i]] : -hash[s[i]]; 
            }
    return r;
    }
};
