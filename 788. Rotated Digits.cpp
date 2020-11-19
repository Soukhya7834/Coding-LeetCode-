class Solution {
public:
    
    bool isValid(int N){
        
        bool check = false;     //IMPORTANT TO INITIALIZE WITH FALSE else default val=true, counts for 0,1,8
        
        while(N>0){
            int n = N;
            int rem = n % 10;
            if (rem == 2 || rem == 5 || rem == 6 || rem == 9){
                cout << "enter" << rem << "  ";
                check = true;
            }
            
            else if (rem == 3 || rem == 4 || rem == 7){
               return false;
           }
            N /= 10;
        }
        
        return check;
    }
    
    int rotatedDigits(int N) {
         int count = 0;
        for (int i = 1; i <= N; i ++) {
            if (isValid(i)){
                cout << "cool" << i << "  ";
                count++;
                cout << "count=" << count << "  ";
                
            }
        }
        return count;
    }
};
