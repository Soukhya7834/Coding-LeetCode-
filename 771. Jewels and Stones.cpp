class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char, int> m;
        int c=0;
        for(auto x: J)
            m[x]++;             // add all elts of J to hash map
        
        for(auto x: S){
            if(m.find(x) != m.end())           //if you find the map elts in S, its val++
                c += 1;
        }
        return c;
    }
};
