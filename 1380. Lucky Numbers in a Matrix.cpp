class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& m) {
        
    // see my video
        
    int mini, maxi,idx ;
    vector<int> res;
        
    int n = m.size();   //row
    int p = m[0].size();    //colm      

    for(int i =0;i< m.size(); i++){
     
        mini = 100005;     //set mini = 1st elt
        idx = -1;
            for(int j=0; j< p; j++){
                if(m[i][j] < mini){
                    mini = m[i][j];
                    idx = j;
                }
            }
            maxi = -1;
            for(int j=0; j< n; j++){
                if(m[j][idx] > maxi)
                    maxi = m[j][idx];

            }
            if(mini == maxi)
                res.push_back(mini);
        }
        return res;
    }
};

/*
[3,7,8],

[9,11,13]

[15,16,17]]
  
     [[1,10,4,2]
      
      ,[9,3,8,7],
      
      [15,16,17,12]]
      
*/
