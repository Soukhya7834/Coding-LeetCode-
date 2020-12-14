class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int temp =0;
        int carry = 1;
        vector<int> res;
        
        for(int i=n-1;i>=0;i--){
            temp = digits[i]+carry;
            carry = temp > 9?1:0;
            temp %= 10;
            res.push_back(temp);
        }
        
        if(carry == 1)
            res.push_back(carry);

        reverse(res.begin(), res.end());
        return res;
    }
};
