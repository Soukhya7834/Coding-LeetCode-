class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        
        vector<int> res;
        vector<int> res2;
        vector<int> res3;

        for(auto Q:queries){
            int c=0;
            //string Q = q;
            sort(Q.begin(), Q.end());
            for(int i=0; i< Q.size(); i++){
                
                if(Q[0] == Q[i] )
                    c++;
            }
            res.push_back(c);
        }
        
        for(auto W:words){
            int c=0;
            //string Q = q;
            sort(W.begin(), W.end());
            for(int i=0; i< W.size(); i++){
                
                if(W[0] == W[i] )
                    c++;
            }
            res2.push_back(c);
        }
        
        for(int i=0; i<res.size(); i++ ){
            int c=0;
            for(int j=0; j<res2.size(); j++ ){
                if(res2[j] > res[i] ){
                    c++;
                }
            }
            res3.push_back(c);
        }         
        return res3;
    }
};

 
