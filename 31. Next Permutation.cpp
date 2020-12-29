class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k, l;
        int n = nums.size();
        for(k=n-2; k>=0; k--){
             if(nums[k+1] > nums[k])        //finding the first decreasing array
                 break;                        //find that pivot point 
        }
        if(k<0)
            reverse(nums.begin(), nums.end());     //last perm, so return the first case, like rotation
         
        else{
            
            for(l =n-1; l>=0 ; l--){               //find with which no to reverse 
                if(nums[l] > nums[k])                   
                    break;
            }
        
            swap(nums[k], nums[l]);             //swap only thse 2 nos now
            reverse(nums.begin() + k+1, nums.end());            // reverse that decreasing sub-array
        }   
    }
}; 
