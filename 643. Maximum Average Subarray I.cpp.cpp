class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double max_sum = accumulate(nums.begin(), nums.begin() + k , 0);
        double prev_sum = max_sum; 
        for(auto i = k; i < nums.size(); ++i) {
            double next_sum = prev_sum - nums[i - k] + nums[i];
            max_sum = max(max_sum, next_sum);
            prev_sum = next_sum;
        }
        return max_sum / k;
    }
};

/*
double max_sum = accumulate(nums.begin(), nums.begin() + k , 0);
works as 

is this if a = [ 1 2 3 4 5 ]    acc(nums.begin(), nums.begin() + k , 0)     sum += 1 2 3

 [1,12,-5,-6,50,3];

ms = 2      ps = 2
    
for(i = 4; i< 6){
  i=4     1. 2 - nums[0] + nums[4]     ns = 2-1+50 = 51;    ms = 51     ps = 51;
  i=5     2. 49 - nums[1] + nums[5]    ns = 51-12+3 = 42;   ms = 51     ps = 42;
}

in end ms = 51
*/
