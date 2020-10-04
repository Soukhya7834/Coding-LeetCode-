class Solution {
public:
    string frequencySort(string s) {
        
        vector<pair<int,char>> hash('z'+1,{0,0});      //'z'+1  is size
        // all pairs initialized with {0,0}
        
        for(char c: s)
            hash[c] = {hash[c].first+1,c};             //here count is first then char

        //for (auto x: hash)
         //   cout << x.first << "  " << x.second << " next" << "  ";
        
        sort(hash.begin(),hash.end());
        
        string res ="";
        
        for(int i = 0; i < hash.size(); i++)
            cout << hash[i].first << ", " << hash[i].second << "\t";
        
        //already sorted in decreasing order. So now add in that manner
        for(auto p: hash)
            res = string(p.first, p.second) + res;   //ex string(4,e) == eeee  
        
        return res; 
        
    }
    
};
