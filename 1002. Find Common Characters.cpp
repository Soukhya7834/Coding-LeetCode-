class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        
        vector<int> cnt(26, INT_MAX);
        vector<string> res;

        for (auto s : A) {
            vector<int> cnt1(26, 0);
            for (auto c : s) 
                ++cnt1[c - 'a']; 
            
            for (auto i = 0; i < 26; ++i) 
                cnt[i] = min(cnt[i], cnt1[i]);    //min(1,1)=1
            
            cout << "\n" << "cnt" << endl;
            for (auto i = 0; i < 26; ++i)
                cout << cnt[i] << "  ";
            
            cout << "\n" << "cnt1" << endl;
            for (auto i = 0; i < 26; ++i)
                cout << cnt1[i] << "  ";
            
        }
        
        for (auto i = 0; i < 26; ++i)
            cout << cnt[i] << "  ";
        for (auto i = 0; i < 26; ++i)               //cnt1
            for (auto j = 0; j < cnt[i]; ++j) 
                res.push_back(string(1, i + 'a'));
        
        return res;
    }
};

/*
["bella","label","roller"]   [a, b, c, ---- z]  (0-25)

"bella"  b-0 e-1 l-2 a-0, r-2; =>cnt[]      i=4(e) ... string(1, 4+'a') = s(1,'e')

[e,l,l]

*/
