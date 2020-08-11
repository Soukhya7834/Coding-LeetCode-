class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int r=0, m=0;
        for(auto x:nums){
             r = (int)log10(x) & 1;
             cout << r << endl;
             m += r;
        }
        return m;
    }
};

/*
12  log =1  1&1 = 1;

345 2       2&1 = 0;

2   0       0&1 = 0;

6   0        0&1 = 0;

7896    3   3&1 = 1;

*/
