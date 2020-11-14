class Solution {
public:
    
    int check(int n){
        
        int res=0, t;
        while(n){
            t = n%10;
            res += t*t;    //t^2
            n /= 10;
        }
        
        return res;
    }
    
    bool isHappy(int n) {
        int sp=n;
        
        int fp = check(n);
        
        while(sp != fp){
            sp = check(sp);
            fp = check(check(fp));
        }
        return sp == 1;
        
        
    }
};
