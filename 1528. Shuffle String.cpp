class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res = s ;
        for(int i =0; i < indices.size(); ++i){
            cout << i << "  "  << indices[i] << endl;
            res[indices[i]] = s[i];
            cout << res[i] << "  " << s[indices[i]] << endl;
        }
        return res;
    } 
};
