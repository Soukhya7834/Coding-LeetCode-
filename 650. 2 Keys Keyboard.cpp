class Solution {
public:
    int minSteps(int n) {
        //toh(though..lol) its dp, i'll avoid & do uisng a different method
        int curr=1, count=0, buff=0;
        
        while(curr < n ){
            int res=n-curr;    //see video at 14:42
            if(res%curr == 0){
                buff = curr;
                curr += buff;
                count += 2;
            }
            else{
                curr += buff;
                count++;
            }
            
        }
        
        
        return count;
    }
};
