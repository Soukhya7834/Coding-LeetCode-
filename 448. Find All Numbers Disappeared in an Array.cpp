vector<int> res;
        unordered_set<int> s;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        if(n == 0)
            return res;
        
        for(int i=0; i< nums.size(); i++){
            s.insert(nums[i]);
        }
        
        for(int i=1; i <= n; i++){          //Find all the elements of [1, n]
            if(!s.count(i))
                res.push_back(i);
        }
        
        return res;
