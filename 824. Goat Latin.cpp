class Solution {
public:
    string toGoatLatin(string S) {
        unordered_set<char> vowel({'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'});
        
        istringstream iss(S);
        
        string res, w;
        int i=0, j;
        
        while(iss >> w){
            res += ' ' + ( vowel.count(w[0]) == 1 ? w : w.substr(1) + w[0] ) + "ma";
            ++i;
            for (int j = 0; j < i; ++j){
                res += 'a';    //i begins from 0, so ++i not i++
            }
        }
        
       return res.substr(1);
        
    }
};

/*

( vowel.count(w[0]) == 1 ? w : w.substr(1) + w[0] )

if vowel.count(w[0]) == 1 ie w begins with vowel,  :w = then just w as it is;    
else = ie w begins with consonant,  w.substr(1) + w[0] ie make sunstring from w[1]. skipping w[0] later append w[0] in end;


*/
