class Solution {
public:
    int res=0;
    int integerReplacement(int n) {
        
        if(n==1)
            return res;
        
        if(n==3)
            return res+=2;
        
        if (n == INT_MAX)
            return 32;
        
        if(n&1){
            if((n+1) %4 == 0){
            res++;
            integerReplacement(n+1);
        }
            else{
                res++;
                integerReplacement(n-1);
            }
        }
        
        else{
            res++;
            integerReplacement(n/2);   
        }
        
        return res;
    }
};
