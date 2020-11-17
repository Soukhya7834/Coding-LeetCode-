class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> res;
        
        unordered_map<int,int> m;
        for(auto x : nums)
            m[x]++;
            
        // pair<first, second>: first is frequency,  second is number
         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
                 
        for (auto it : m) {
            pq.push(make_pair(it.second, it.first));
            while (pq.size() > k) 
                pq.pop();
            
        }
            
        while(!pq.empty()){
            //cout << pq.top.second << " ";
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        return res;
    }
};
