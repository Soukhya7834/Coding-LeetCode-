class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      
    //  aa   aab   a-2; a-2 b-1     r: a-0
       
        if(ransomNote == "")  return true;
        
        map<char, int> r;
        map<char, int> m;
        
        for(auto c : ransomNote ){
            r[c]++;
        }
        
        for(auto c : magazine ){
            m[c]++;
        }
        
        bool b;
        
        for(auto c : ransomNote ){
            cout << c<<" "<<r[c]<<" "<<m[c];
            cout<<endl;
            if(r[c]<=m[c])
                b = true;
            else {
                cout<<"false" << endl;
                return false;
            }
        }
         
        return b;
        
    }
};


/*
"bg"
"efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj"

"fihjjjjei"
"hjibagacbhadfaefdjaeaebgi"

my own example 

"fihjjjjei"
"hjibagacbhadfaefdjaeaebgifihjaaajjjei"

*/
