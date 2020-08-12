class Solution {
public:
    int countNegatives(vector<vector<int>>& g) {
        int c=0;
        
        int total = g.size() * g[0]. size();            //total elts = row ss * colmn sz
        
        for(int i =0; i<g.size(); i++) {
            for(int j=0; j<g[0].size(); j++ ){
                if(g[i][0] < 0){
                    i = g.size();
                    break;
                }
                
                if(g[i][j] < 0)
                    break;
                
                c++;

            }
        }
            return total-c;
            
        
    }
};
