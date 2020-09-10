class Solution {
public:
    bool repeatedSubstringPattern(string s) {
         
        bool flag =  (s + s).substr(1, 2*s.size()-2).find(s) != -1;
        //bool flag =  (s + s).substr(1, 2*s.size()-2).find(s) == 1;
        bool flag2 =  (s + s).substr(1, 2*s.size()-2).find(s);
        cout << flag << "  " <<  flag2 ;
        return flag;
    
    }
};
