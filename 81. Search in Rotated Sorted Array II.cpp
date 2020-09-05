//gives sme an error now

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size();
    while (lo <= hi) {
        
        while (lo < hi && nums[lo] == nums[lo + 1]) lo++; // skip duplicates from the left
        while (hi > lo && nums[hi] == nums[hi - 1]) hi--; // skip duplicates from the right
        
        int mid = (lo + hi) / 2;
        
        double num = (nums[mid] < nums[0]) == (target < nums[0])
                   ? nums[mid]
                   : target < nums[0] ? -INFINITY : INFINITY;
                   
        if (num < target)
            lo = mid + 1;
        else if (num > target)
            hi = mid;
        else if(num == target)
            return true;
    }
    return false;
    }
};

Better   https://leetcode.com/problems/search-in-rotated-sorted-array-ii/discuss/28218/My-8ms-C++-solution-(o(logn)-on-average-o(n)-worst-case)/164813

bool search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        
        while (l <= r) 
        {
            while (l < r && nums[l] == nums[l + 1]) l++; // skip duplicates from the left
            while (r > l && nums[r] == nums[r - 1]) r--; // skip duplicates from the right
            
            int mid = (l+r) / 2;
            
            if (target == nums[mid])
                return true;
            
            // there exists rotation; the middle element is in the left part of the PIVOT
            if (nums[mid] > nums[r]) 
            {
                if (target < nums[mid] && target >= nums[l])
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            // there exists rotation; the middle element is in the right part of the PIVOT
            else if (nums[mid] < nums[l]) 
            {
                if (target > nums[mid] && target <= nums[r])
                    l = mid + 1;
                else
                    r = mid - 1;
            }
            // there is no rotation; just like normal binary search
            else 
            {
                if (target < nums[mid])
                    r = mid - 1;
                else
                    l = mid + 1;
            }
        }
        return false;
    }
