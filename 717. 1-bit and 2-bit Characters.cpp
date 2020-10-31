class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        
        bool f=false;
        int n = bits.size();
        
        for(int i=0; i<n; i++){
            if(i == n-1)        //The given string will always end with a zero.  bits[n-1] = 0 for sure
                f = true;
            
            if(bits[i] == 1)
                i++;            //i jump over one step
            
        }
        
        return f;
    }
};



/*

01010 =  0 10 10 \n   f       10 11   01

01110 = 0 11 10 \n    f         0 1"1" 1 "0"

10100 = 10 10 0  \n     t

[1, 0, 0]   100    10  0;

101      10(i=0  1)  1(i=2)    t

[1, 0, 0, 0, 0, 1, 1, 0]   n=8     10 0 0 0 11 0

*/
    
    
