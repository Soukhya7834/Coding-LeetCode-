class Solution {
public:
    string countAndSay(int n) {
        
        if(n==0) return "";
        
        string res = "1";
        
        while(--n){     // not n--, coz first n=1, already handled 
        string curr = "";
            
        for(int j=0; j< res.size() ; j++){
            
            int c=1;

            cout << "j=" << j << " " << "res.size()=" << res.size() << endl;
            
            while(j < res.size()-1 && (res[j] == res[j+1])){
                c++; j++;
            }
            
            string c2 = to_string(c);
            cout << "c2 = " << c2 << "  " << "j=" << j  << "  "<< "res[j] = " << res[j] << endl; 
            curr +=  c2 + res[j];
        }
            res = curr;
            cout << res << " ok " << curr << endl; 
        }
        return res;
    }
};
