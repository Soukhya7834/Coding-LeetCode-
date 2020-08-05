class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> out;
        int n = nums.size();
        //sort(nums.begin(), nums.end());
        //int c=0;
        for(int i=0;i< n; i++){
            int maxi = nums[i];
            int c =0;

            for(int j=0;j< n; j++){
                if(nums[j] < maxi)
                    c++;
            }
            out.push_back(c);
                
        }
        return out;
    }
};


//OR 

//https://www.youtube.com/watch?v=O8Wh0nFyXGo

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>a(101);
        vector<int>b(101);
        int n=nums.size();
        
        for(int i=0;i<n;i++)  // making the frequency array
            a[nums[i]]++;
        
        for(int i=1;i<101;i++)  //filling the prefix sum array
            b[i]=b[i-1]+a[i-1];
        
        vector<int>ans(n);  // final solution array
        
        for(int i=0;i<10;i++)
            cout<<a[i]<<" ";
        
        cout << endl;
        
        for(int i=0;i<10;i++)
            cout<<b[i]<<" ";
        
        for(int i=0;i<n;i++){
            ans[i]=b[nums[i]];
        }
        return ans;
    }
};
