class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       
        vector<int> vec;        
        int n = arr.size();   //n=6
        //vec[n-1] = -1;
        vec.push_back(-1);

        int maxi =-1;
        for(int i = n-2; i>=0; i--){            // i=4, i-> 4 3 2 1 0
            int j = i+1;
            maxi = max(maxi, arr[j]);
        
            vec.push_back(maxi);
        }
        reverse(vec.begin(), vec.end());
        return vec;
    }
};

/*
[17,18,5,4,6,1]  -1         vec = [           6   , 1 , -1]
    
6   1, -1 = 1;  max = 1;            i=4, i-> 4 3 2 1 0

4   6, 1 =  6;  max = 6;

5   4, 6 =  6;  max = 6;

18   5, 6 = 6;  max = 6;

17  18, 6 = 18; max = 18;

*/
