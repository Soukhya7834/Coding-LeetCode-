class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s(nums1.begin(), nums1.end());     //set now has nums1 elts
        vector<int> out;
        
        for (int x : nums2)
            if (s.erase(x))         //if x found in set, erase it from s
                out.push_back(x);       //& add to out coz this elt "x" is present in both arrays, ie intersection
            
        return out;
    
    }
};
