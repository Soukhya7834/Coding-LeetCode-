class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        unordered_map<int, int> m;
        vector<int> res;
        vector<int> res2;

        for(int i=0; i< n ;i++){
            m[arr1[i]]++;            //freq of elts
        }  
        
        for(int i=0; i< arr2.size(); i++){
            int count = m[arr2[i]];     //count = freq
            
            for(int j=count; j>0; j--)
                res.push_back(arr2[i]);
            m[arr2[i]] = 0;
        }
        
        for(int i=0; i< n ;i++){
            if(m[arr1[i]] != 0){        //freq of elts
               int count = m[arr1[i]];
               for(int j=count; j>0; j--)
                    res2.push_back(arr1[i]);
                m[arr1[i]] = 0;

            }                  
            
        }  
        
        sort(res2.begin(), res2.end());
        for(int i=0; i< res2.size() ; i++){
            res.push_back(res2[i]);
        }
        
        return res;
    }    
};
https://www.youtube.com/watch?v=D3hTZkJBkHk
