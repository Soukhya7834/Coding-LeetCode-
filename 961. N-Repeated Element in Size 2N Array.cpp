class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        
        unordered_map<int, int> m;
        int n = A.size()/2;
        
        for(int i=0; i<A.size() ;i++){
            m[A[i]]++;
        }
       
         for(int i=0; i< A.size() ;i++){
            if(m[A[i]] == n)
                return A[i];
         }
            return -1;
        
    }
};
