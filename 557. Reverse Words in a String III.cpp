class Solution {
public:
    string reverseWords(string s) {
        
        for (int i = 0; i < s.length(); i++) {
            
            cout << "i0=" << i << "  " ;
            
            if (s[i] != ' ') {   // when i is a non-space
                int j = i;
                cout << "j0=" << j << "  ";
                for (; j < s.length() && s[j] != ' '; j++) { } // move j to the next space
                cout << "j=" << j << "  ";
                cout << "char=" << s[j] << "  ";
                reverse(s.begin() + i, s.begin() + j);
                i = j-1;
                cout << "i=" << i << "  " ;
            }
        }
        
        return s;
    }
};

//i=j;
//i0=0  j0=0  j=5  char=   i=5  i0=6  j0=6  j=10  char=   i=10  i0=11  j0=11  j=19  char=   i=19  i0=20  j0=20  j=27  char=  i=27  


//i=j-1;
//i0=0  j0=0  j=5  char=   i=4  i0=5  i0=6  j0=6  j=10  char=   i=9  i0=10  i0=11  j0=11  j=19  char=   i=18  i0=19  i0=20  j0=20  j=27  char=  i=26 


// see when its  i=j-1, its being processed for s[i]=" ", but idk why the author wants to do it for that extra space again, which i dont think is needed. 
