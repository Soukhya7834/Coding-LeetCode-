class Solution {
public:
    string addStrings(string num1, string num2) {
        
       int idx1 = num1.size() - 1, idx2 = num2.size() - 1;
        int carry(0);
        string ans;

      while(idx1 > -1 || idx2 > -1 || carry) {
          
        int d1 = (idx1 >= 0) ? num1[idx1--] - '0' : 0;    //i1 =  1 0 -1
        int d2 = (idx2 >= 0) ? num2[idx2--] - '0' : 0;    //i2 =  1 0 -1
        int sum = d1 + d2 + carry;      
        carry = sum/10;
        ans += '0' + (sum % 10);    // ans = sum%10 + '0' + ans; and no reverse
    }

    reverse(ans.begin(), ans.end());
    return ans;
    }
};

/*
"219279" + "459068"     
    
    "74"  + "45"  = "119"    sum= 4+5+0=9   c=0             ans='0' + 9  =9
                d1=7 d2=4     sum=7+4+0=11   c=11/10=1    ans ='0'+ 1 ='1'   ans  = 91
            d1=0 d2=0     sum=0+0+1=1     c=1/10=1    ans ='0'+ 1 ='1'   ans  = 911    "911"  "119"

              ans = '0' + 9 = '9'        int c = num1[idx1--] - '0'  = '7' - '0'  = 7
*/
