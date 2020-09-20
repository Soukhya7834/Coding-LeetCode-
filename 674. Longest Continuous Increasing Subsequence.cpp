class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 0) return 0;
        
        unordered_set<int> s;
        s.insert(nums[0]);
            
        int max = nums[0], c=1, count=1;
        
        for(int i=1; i< n; i++){
            if(nums[i] > max ){
                max = nums[i]; 
                c++;
                if(c > count )   count= c;
                cout << "c=" << c << "  ";
            }
            else{
                cout<< "enter2" << " ";
                max = nums[i]; 
                cout << "now max=" << max << "  ";
                c = 1;
            }
            s.insert(nums[i]);
            
        }
        
        if (s.size() == 1) return 1;
        
        return count;
    }
};
