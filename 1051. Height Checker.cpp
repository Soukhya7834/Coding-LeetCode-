class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sorted ;
        
        sorted = heights;
        int c=0;
        
        
        sort(sorted.begin(), sorted.end());
        
        for(int i =0; i< heights.size(); i++){
            if(sorted[i] != heights[i])
                c++;
            
        }
        return c;
    }
};



// a lil wrong description, we need to see how many students are in wrong pos
