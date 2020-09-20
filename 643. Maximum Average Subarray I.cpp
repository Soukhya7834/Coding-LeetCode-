class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        if(n == 0)    return 0;
        int res1 = nums[n-1] * nums[n-2] * nums[n-3];
        int res2 = nums[0]*nums[1]*nums[n-1];        //nums[n-1];  very smart
        
        return res1>res2?res1:res2;
        
    }
};

/*
What is the array is [-4, -3, -1, 0 ] 

even then take res2= n[0] * n[1] * n[n-1], coz the smallest 2 elts are at start, 
so negative * neg = positive

even if  array is [-4, -3, -1, 0 ]    res2= 0, greater than -12 of fisrt 2 elts

instead if yoiu take first 3, you'll get a negative result. No good. 

*/
