class Solution {
public:
    string generateTheString(int n) {
       
        int half = n/2;
        string res;
        
    if(n%2 ==0){
        if (n==0)   return res;
        if (n==2)   return "ab";

        int ac = half+1;
        int bc = half-1;
        
        if(ac%2 != 0 && bc%2 != 0 ){     //enter only if the halfs are not even
                                            // ex, 4  a ac=3, bc=1   but ex 6   ac=4   bc=2
            for(int i=0; i< ac; i++)
                res += "a";
        
            for(int i=0; i< bc; i++)
                res += "b";
        
        }
        
        else{
            ac = half;
            bc = half;
        
            for(int i=0; i< ac; i++)
                res += "a";
        
            for(int i=0; i< bc; i++)
                res += "b";
        }
                
        
    }
        
        else{
            int no = n/3;
            int rem  = n%3;
            cout << "no=" << no << "  " << "rem=" << rem << endl;
            
            for(int i=0; i < n; i++){
                res += "a";
            }
        }
            
        
        return res;
    }
};


 
/*     ach character in such string occurs an odd number of times.    so it means n=even

if n=8,   ac=5, bc=    res = aaaaa bbb */
