class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int i=0;
        vector<int> out;
        for(int i=0; i<nums.size(); i+=2){
            for(int j=0;j< nums[i]; j++)
                out.push_back(nums[i+1]);
        }
        return out;
    }
};

Better 

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        vector<int> v;
        int i,j,k=0, n=nums.size();
        
        while(k<n){
            i=nums[k];
            j = k+1;
            cout << "i=" <<i << " ";
             
            while(i){
                v.push_back(nums[j]); i--;
            }
                
            k+=2;  cout << "after "<< "i=" <<i <<endl;
        }
        
        return v;
    }
    
};
