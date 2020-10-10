
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> next(n, -1);
        stack<int> s; // index stack
        
        for (int i = 0; i < n * 2; i++) {
            int num = nums[i % n]; 
            while (!s.empty() && nums[s.top()] < num) {
                next[s.top()] = num;
                s.pop();
            }
            if (i < n) s.push(i);
        }   
        return next;
    }
};

/*
[1,2,1]    0 1 2 3 4 5  ;    
int num = nums[0%3]=nums[0] 
int num = nums[1%3]=nums[1]
int num = nums[2%3]=nums[2] 
int num = nums[3%3]=nums[0] 
int num = nums[4%3]=nums[1] 
int num = nums[5%3]=nums[2]


so basically, when loop starts for second time, we traverse all over agin from nums[0] to nums[n-2]  for the last elt ie. nums[n-1]

NOTE - only last elt needs this special 2nd traversal. And we traverse just before the last elt, ie till 
pos[n-2]

*/
