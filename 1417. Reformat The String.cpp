class Solution {
public:
    string reformat(string s) {
        
        string a="",d="";
        // split string into alpha string and digit strings
        
        for(auto x:s)
            isalpha(x) ? a.push_back(x) : d.push_back(x);
  
        // if difference is more than 1, return "" since not possible to reformat
        
        if(abs(int(a.size()-d.size()))>1)    // abc   0123345    0a1b2c3  45
            return "";
        
        // merge the strings accordingly, starting with longer string
        bool alpha=a.size()>d.size();    //f
        
        int i=0,j=0,k=0;
        
            while(i<s.size()){
                if(alpha){
                    s[i++]=a[j++];
                }
                else{
                    s[i++]=d[k++];
                }
                alpha=!alpha;      // f-t-f-t-f-t-f
            }
        return s;
    }
};

/*
"a0b1c2"   abc      0123        s=0 a 1 b 2 c 3   
    
           abcd     012         s=a 0 b 1 c 2 d      t-f-t-f-t-f-t
           
           */
    
    
    
    
