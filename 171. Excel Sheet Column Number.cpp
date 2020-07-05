class Solution {
public:
    int titleToNumber(string s) {
        int res = 0;
        for(auto c: s) {
            cout << (c - 'A'+ 1)<<endl;
            res = res*26  +  (c - 'A'+ 1);
            cout << res << endl;
        }
        return res;
    }
};
