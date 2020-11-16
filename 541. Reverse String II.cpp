class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();
        int  l=0;  
        int r = min(k, n );
        cout << r  << endl;

        while(l<n){
            cout << "l=" << l << "  "<< "r=" << r << "  " ;
            reverse(s.begin()+l, s.begin()+r);
            cout << s << "  ";
            l += 2*k;
            r = min(l+k, n );
        }
        return s;
    }
};

//tricky part was finding out the start & end part
