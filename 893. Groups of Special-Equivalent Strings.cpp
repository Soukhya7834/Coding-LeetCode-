class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        
       
        unordered_set<string> s;
        
        for(auto x : A){
             string even, odd;      //create new strings everytime
            for(int i=0; i< x.size(); i++){
                if(i%2==0)   even += x[i];
                else         odd += x[i];
            }
            sort(even.begin(), even.end());
            sort(odd.begin(), odd.end());
            
            s.insert(even + odd);
        }
        return s.size();
    }
};

/*
//["abcd","cdab","cbad","xyzz","zzxy","zzyx"]

check here ["abcd","cdab","cbad",]    on sorting all these are same

["xyzz","zzxy","zzyx"]


For example, S = "zzxy" and T = "xyzz" are special-equivalent because we may make the moves 
"zzxy" -> "xzzy" -> "xyzz" that swap S[0] and S[2], then S[1] and S[3].

*/
