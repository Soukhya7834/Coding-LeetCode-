class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
    
        int m = nums.size(), n = nums[0].size(), i=0;
        
        if (r * c != m * n)
            return nums;
        
        vector<vector<int>> reshaped(r , vector<int> (c, 0));
        
        for (i = 0; i < r * c; i++){
            reshaped[i/c][i%c] = nums[i/n][i%n];
            cout << i << " "<< c<<" "<<n<<endl;
            cout << i/c << "  " << i%c << "  &  " <<  i/n  << " "<< i%n << endl;
        }
        return reshaped;
    }
};
