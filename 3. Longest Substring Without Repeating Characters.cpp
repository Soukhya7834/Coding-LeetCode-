class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        
        for (int i = 0; i != s.length(); i++) {
            
            if (dict[s[i]] > start){
                cout << "\n" << "en" << "  " << i  <<  "  " ;
                cout << dict[s[i]] << "  " << start << "  ";
                start = dict[s[i]];
            }
            dict[s[i]] = i;
            //cout << dict[s[i]];
            
            maxLen = max(maxLen, i - start);
        }
        
        return maxLen;
    }
};
/*
//sliding window https://www.youtube.com/watch?v=s2ZGeNeKpuI
// or dict
//https://leetcode.com/problems/longest-substring-without-repeating-characters/discuss/1737/C%2B%2B-code-in-9-lines.

"abcabcbb"
stdout

en  3  0  -1  
en  4  1  0  
en  5  2  1  
en  6  4  2  
en  7  6  4
*/


/*
***watch my yt video
"abcabcbbabcde"
stdout

en  3  0  -1  
en  4  1  0  
en  5  2  1  
en  6  4  2  
en  7  6  4  
en  9  7  6  

maxlen = 3-0=[3]  8-6=2   [3]   10-7=[3]       11-7 = [4]     12-7=[5]

start = -1  0 1 2   4  6  7      

0>-1    1>0    2>1  4>2   6>4  7>6      5>7 -1>7   -1>7
*/
