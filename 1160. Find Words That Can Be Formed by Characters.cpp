class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        unordered_map<char, int> m1;
        int res=0 ;
        
        for(auto i : chars){
            m1[i]++;
        }
        
        for(auto w : words){
            unordered_map<char, int> m2 = m1;
            int c=0;
            for(auto ch : w){
                if(m2[ch] > 0){
                    c++;
                    m2[ch]--;
                }
            }
            if(c == w.size())
                res += c;
        }
        
        return res;
        
    }
        
};
