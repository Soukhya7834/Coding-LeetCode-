class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int s = A.size();
        //int n = A.size();
      
        int max = A[0];
       int flag = 0; 
       while(i!=s){
            if(A[i]> max){
                max = A[i];
                i++;
                if(A[i]<max){
                    flag =1;
                    break; }
            }
       }
    //  i--;
        int min = A[i];
        while(i!=s){
            if(A[i] < min){
                min = A[i];
                i++;
                if(A[i] > min){
                    flag =1;
                    break;  }
                
            }
        }
    }
};