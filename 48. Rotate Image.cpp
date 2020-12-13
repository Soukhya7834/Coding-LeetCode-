class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int n = m.size();
        
        for(int i =0; i< n ;i++){
            for(int j=i;j< n ;j++){
                swap(m[i][j],m[j][i]);
            }
        }
        
        for(int i =0; i< n ;i++){
            for(int j=0;j< n ;j++){
                cout << m[i][j];
            }
            cout << "\n";
        }
        
     for(int i =0;i< n ; i++){
         reverse(m[i].begin(), m[i].end());
     }
    }
};


//for such roatation problem , first step is to do a transpose, then see what can you do ahead to get the result matrix
