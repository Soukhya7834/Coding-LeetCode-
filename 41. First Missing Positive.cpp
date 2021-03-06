class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> res = {};
        unordered_set<int> s;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        if(n == 0)
            return 1;
        
        for(int i=0; i< nums.size(); i++){
            if(nums[i] >= 0){
                cout << nums[i] << "  ";
                s.insert(nums[i]);
            }
        }
        cout << endl;
        for(int i=1; i <= n+1; i++){          //Find all the elements of [1, n]
            cout << i << "  ";
            if(!s.count(i))
                res.push_back(i);
        }
        
        return res[0];
    }
};
