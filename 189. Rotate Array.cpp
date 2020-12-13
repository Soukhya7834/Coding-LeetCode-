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
        
        //for(int i = nums.begin(); i < nums.begin()+k; i++)            //such a loop doesnt work :(
            //cout << nums[i] << "  ";
            
        for(int i = 0; i < nums.size(); i++)
            cout << nums[i] << "  ";
            
        cout << endl;
        
        reverse(nums.begin()+k, nums.end());
    }
};


// [1,2,3,4,5,6,7], k = 3      [5,6,7,1,2,3,4]
// 7654321   
//567 4321
//567 1234
