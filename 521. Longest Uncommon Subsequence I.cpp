class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a==b) return -1;
        return max(a.size(),b.size());
    }
};


// ex- a=aba b=abaa    abaa is ss of b, not a
