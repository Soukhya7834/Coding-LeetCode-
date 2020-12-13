class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        
        unordered_map <int, int> m;
        vector<int> temp = (nums1.size() > nums2.size()) ? nums1 : nums2;
        vector<int> temp2 = (nums1.size() > nums2.size()) ? nums2 : nums1;
        
        for(int i=0; i<temp.size(); i++){
            m[temp[i]]++;
        }
        
        for(auto x: temp2){
            m[x]--;
            if(m[x] >= 0)
                res.push_back(x);
        }
            
        return res;
    }
};
