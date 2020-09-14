class Solution {
public:
    bool uniqueOccurrences(vector<int>& A) {
        
        unordered_map<int, int> m;
        unordered_set<int> s;

        int n = A.size()/2;
        
        for(int i=0; i<A.size() ;i++){
            m[A[i]]++;
        }
       
        map<int, int>::iterator itr; 
        for (itr = m.begin(); itr != m.end(); ++itr) { 
                s.insert(itr->second); 
    } 
        int ms = m.size();
        int ss = s.size();
        
        if(ms == ss)
            return true;
        else
            return false;
    }
};
