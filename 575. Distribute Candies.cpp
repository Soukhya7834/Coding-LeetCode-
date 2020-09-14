class Solution {
public:
    int distributeCandies(vector<int>& A) {
        
        //unordered_map<int, int> m;
        unordered_set<int> s;

        int n = A.size()/2;
        
        for(int i=0; i<A.size() ;i++){
            s.insert(A[i]);
        }
      
        int ss = s.size();
      
        return min(n, ss);
    }
};
