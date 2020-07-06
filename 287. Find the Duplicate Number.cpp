class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> vect = nums;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for(int i =0; i < n ;i++)
            cout << nums[i];
        cout << endl;
        
        map<int, bool> m;
        int c, res;
        
        //map<int, bool>::iterator i = m.begin(); 
        for(int i =0;i< n-1; i++){
            if(nums[i] != nums[i+1]){
                m.insert(pair<int, bool>(nums[i], true));
                //cout << m[i].first << " " << m[i].second <<endl;
                
                
            }
            else{
                m.insert(pair<int, bool>(nums[i], false));
                //cout << m[i]<<endl; 

            }
        }
        
        for(auto const& i : m.begin(); i != m.end(); i++){
            cout << m[i]->first << " " << m[i]->second << endl;
        }
        
        cout << "rr";
        
        map<int, bool>::iterator it = m.begin(); 
         while(it != m.end()) { 
            if(it->second == false)
                cout << it->first;
                res = it->first;
            cout << res<<endl;
            it++;
        }
        return res;
    }
};
