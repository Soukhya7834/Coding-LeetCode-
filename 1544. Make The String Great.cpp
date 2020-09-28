class Solution {
public:
    string makeGood(string s) {
        int sz = 0;
        while (sz != s.size()) {     
        sz = s.size();          //dynamicallly keeps updating value of sz when s.size() changees
            
        for (int i = 0; i +1 < s.size(); ++i)     //i<s.size()-1   makes difference
            if (abs(s[i] - s[i + 1]) == 32)
                s = s.substr(0, i) + s.substr(i + 2);       //l e  E   e    etcode"
                                                            //  i  i+1 i+2
                                       //so remove i, i+1 ie "eE"
        }
        if(s.size() == 0){
            cout << "en1";
            return "";
        }
        else     
            return s;
    }
};

/*
        while (sz != s.size()) {
      
ex "abBAcC"             
            sz=0;   s.size()=6      then sz!=s.size() ;     sz=6;   
 -bB        sz=6;   s.size()=4      then sz!=s.size() ;     sz=4;   
  -cC       sz=4;   s.size()=2      then sz!=s.size() ;     sz=2; 
  -aA       sz=2;   s.size()=0      then sz!=s.size() ;     sz=0; 
           
            sz=0;   s.size()=0      then sz==s.size() ;     done :) 
            
after dynamic changes in both si.size() & sz, there comes a point where we cant change them further. Stop there;
            
"leEeetcode"     leetcode           sz=0;   s.size()=10    then sz!=s.size() ;     sz=8; 
Output: "leetcode"            -eE   sz=8;   s.size()=8     then sz==s.size() ;     stop :) 

            
            */
            
            

            
                         
