class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int i;
        vector<int> temp;
        int j = n - k;
        for(i =j;i<k;i++){
            temp.push_back(nums[i]);
        }
        for(i =0;i<j;i++){
            temp.push_back(nums[i]);
        }
        for(i =0;i<n;i++){
            nums.push_back(temp[i]);
        }
        //return;
    }
};

BETTER

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %=nums.size();
        cout << k<< endl;
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        //for(int i = nums.begin(); i < nums.begin()+k; i++)
            //cout nums[i] << "  ";
        cout << endl;
        
        reverse(nums.begin()+k, nums.end());
    }
};
