class Solution {
public:
    int compress(vector<char>& c) {
        
        vector<char> ch;
        int n = c.size();
        cout << "n=" << n << endl;
        
        if(n < 2)
			return n;
        int i=0, j;           //to loop thru. i will track the unique lets, j tracks the same elts
        
        int cnt;
        
        while(i < n){
            cnt=0;   j=i;
            while(j<n && c[i] == c[j]){
                cout << c[i] << "  " << c[j] << "  ";
                ++cnt;      ++j;   
                cout << "j= " << j << "  ";
            }
           
            ch.push_back(c[i]);
            cout << "i1=" << i << "  " << c[i] << "  ";
            cout << "cnt=" << cnt << "  ";
            string str = to_string(cnt);
				for(auto c1: str){
                    if(cnt > 1){
                        cout << "  " << "str=" << str << "  ";
					    ch.push_back(c1);
                    }
                    else
                        continue;
                }
             i = j;
            cout << "i2 =" << i <<endl;
        }
        
        cout << endl;
        for(int i=0; i < ch.size() ; i++)
            cout << ch[i] << "  ";
        cout << endl;
        
        for(int i=0; i<n; i++)
            cout << c[i] << "  ";
        cout << endl ; 
        
        c.clear();
        
        for(int i=0; i<ch.size(); i++)
            c.push_back(ch[i]);
        
        cout << endl ; 
        
        
        return c.size();
    }
};
