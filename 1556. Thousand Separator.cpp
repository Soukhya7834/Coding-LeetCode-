class Solution {
public:
    string thousandSeparator(int n) {
        
        string s = to_string(n);   // 123456789
        string res;
        int m =s.size(), c=0;
        cout << s[m-1] << endl;
        
        for (int i = m-1; i >=0;  i--) {
            
            cout << "i=" << i << "  " << s[i] << "  ";
            c++;
            cout << "c=" << c << "  ";
            res += s[i];
            
            if (i>0 && c == 3){
                cout << "enter" << c << "  ";
                res += ".";  c=0; 
            }
        }
        cout<< "\n" << res << endl;
        reverse(res.begin(), res.end());
        return res;
    }
};

/*
= 123 456 789   
  012 345 678   
    
    123.456.789
    */


//987    res = 7 8 9    i= 210;

//123456789    987 i= 876 c=3   987.   987.654 i=543  c=3  987.654.    987.654.  i=210 c=3  987.654.321   i = 
    
    
