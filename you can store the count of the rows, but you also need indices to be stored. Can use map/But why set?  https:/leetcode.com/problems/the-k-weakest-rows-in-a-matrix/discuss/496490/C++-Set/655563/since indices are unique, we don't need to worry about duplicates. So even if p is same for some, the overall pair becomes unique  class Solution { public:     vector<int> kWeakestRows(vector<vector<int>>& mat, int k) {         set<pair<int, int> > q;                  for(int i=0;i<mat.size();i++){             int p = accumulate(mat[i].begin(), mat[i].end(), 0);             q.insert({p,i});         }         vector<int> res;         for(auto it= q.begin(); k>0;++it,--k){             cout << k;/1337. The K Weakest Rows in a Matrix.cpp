// you can store the count of the rows, but you also need indices to be stored. Can use map

// But why set?  https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/discuss/496490/C++-Set/655563

//since indices are unique, we don't need to worry about duplicates. So even if p is same for some, the overall pair becomes unique

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int, int> > q;
        
        for(int i=0;i<mat.size();i++){
            int p = accumulate(mat[i].begin(), mat[i].end(), 0);
            q.insert({p,i});
        }
        vector<int> res;
        for(auto it= q.begin(); k>0;++it,--k){
            cout << k;
            //when you take it = begin(), start from ++it, so that it now points to 0;
            res.push_back(it-> second);
        }
        return res;
        }
};
