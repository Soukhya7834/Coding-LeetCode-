class Solution {
public:
    string intToRoman(int num) {
        string table[4][10] = {{"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
                           {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
                           {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
                           {"", "M", "MM", "MMM"}
          
                              };
        int r=0, c=0;
        string res;
        while(num > 0){
            r  = num % 10;
            //res += table[c][r];
            res = table[c][r] + res;

            cout << res << endl;
            num /= 10;
            c ++;
            
        }
        return res;
    }
};
