class Solution {
public:
    bool canFormArray(vector<int>& a, vector<vector<int>>& p) {
        
        int n1=a.size();
        int n2= p.size();
        int k=0;
        string r1, r2;
        
        if(n1 != n2)
            return false;
        
        vector<vector<int>> v;
        
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(a[i] == p[i][0])
                    v.push_back(p[i]);
            }
        }
        
        for(int j=0; j<n1; j++){
            r1 += to_string(a[j]);
        }
        
        /*for(int j=0; j<v.size(); j++){
            r2 += to_string(v[j]);
        }*/
        
        for(int i=0; i<v.size(); i++){
            for(int j=0; j<v[0].size(); j++)
                r2 += to_string(v[i][j]);
        }

        cout << n1 << " " << n2 << endl;
        cout << r1 << "  " << r2;
        
        if(r1 == r2)
            return true;
        else 
            return false;
        
        
    }
};
