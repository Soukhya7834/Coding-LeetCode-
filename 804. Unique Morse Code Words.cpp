class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> res;
        
        vector<string> d = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

        
        for(auto w: words){         //for entire vector of strings
            string ans;
            for(auto c: w)          //for entire word ie, "i"th string
                ans += d[c-'a'];
             res.insert(ans);
            
        }
        
        for( auto c: res)               //just for checking 
            cout << c << " ";
        cout << endl;
        
        return res.size();
        
    }
};
