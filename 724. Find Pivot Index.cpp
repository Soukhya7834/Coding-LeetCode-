class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int tot = 0, sum=0;
        
        tot = accumulate(nums.begin(), nums.end(), tot);
        
        for(int i=0; i<n ; i++){
            sum += nums[i];
            int rem = tot - sum;
            if ( sum - nums[i] == rem )
                return i;
        }
        return -1;
    }
};

or

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum =0, left=0;
        for(i=0;i<n;i++){
            sum += nums[i];
        }
        itn right = sum ;
        while(i!=n){
        for(i=0 & j=n-1 ;i<n & j < n;i++; j++){
            left += nums[i];
        }
    }
};
