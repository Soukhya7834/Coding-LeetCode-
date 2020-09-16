class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};


or

class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> temp;
        //int len = s.length();
        if(s.size()== 0)
            return ;
        
        for(auto i=s.end()-1;i>=s.begin();i--){
            temp.push_back(*i);
        }
        
        s = temp;
    }
    
};
