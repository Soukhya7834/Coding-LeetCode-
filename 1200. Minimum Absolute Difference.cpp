class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int mindiff = 99999;
        vector<vector<int>>  res;
        
        for(int i =0; i< arr.size()-1; i++){
            mindiff = min(abs(arr[i]-arr[i+1]), mindiff);
        }
        
        for(int i =0; i< arr.size()-1; i++){
            if(abs(arr[i]-arr[i+1]) ==  mindiff)
                res.push_back({arr[i],arr[i+1]});
        }
        return res;
    }
};
