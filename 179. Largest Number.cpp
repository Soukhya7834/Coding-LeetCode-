class Solution {
public:

    string largestNumber(vector<int>& num) {
        
        vector<string> v;
        string res;
        
        for(auto i: num)
            v.push_back(to_string(i));
        
        sort(v.begin(), v.end(), [](string &s1, string &s2){return s1+s2 > s2+s1 ;});
        
        for(auto s: v)
            res += s;
        
        while(res[0] == '0' && res.length() > 1){
            res.erase(0,1);
        }  
        return res;
    }
};

/*
330   303;
33034   34330;
343305   534330;
5343309   9534330;


asc desc 

00684  [0] = 0;
    
    69000    0000000=0
    */
