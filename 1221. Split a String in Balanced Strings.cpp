class Solution {
public:
    int balancedStringSplit(string s) {
        
        int res = 0, cnt = 0;
        for(auto x: s){
            cnt += (x == 'L') ? 1 :-1;
            if(cnt == 0)  res++;
        }
        return res;
    }
};
