class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        int n = points.size();
        vector<pair<int, pair<int, int>>> v;
        
        int d=0;
        for(auto it : points){
            d = it[0]*it[0] + it[1]*it[1];
            v.push_back({d, {it[0], it[1]}});
        }
        
        sort(v.begin(), v.end());
        
        vector<vector<int>> ans(K);    //size=k coz k closest points
        
        for(int i=0;i<K;++i)
        {
            ans[i].push_back(v[i].second.first);      //x
            ans[i].push_back(v[i].second.second);       //y
        }
        
        return ans;
    }
        
        
};
    
