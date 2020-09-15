class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> rows(mat.size()), cols(mat[0].size());
    for (int i = 0; i < rows.size(); ++i)
        for (int j = 0; j < cols.size(); ++j) {
            if (mat[i][j])
                ++rows[i], ++cols[j];   //we check this specially coz we want to track rows colmn seperately. 
        }
    int res = 0;
    for (int i = 0; i < rows.size(); ++i)
        for (int j = 0; j < cols.size(); ++j)
            if (mat[i][j] && rows[i] == 1 && cols[j] == 1)
                ++res;
    return res;
    }
};
