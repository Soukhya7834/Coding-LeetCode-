class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>> res;
        int val = image[sr][sc];
        
        int r = image.size();       //row colmn count 
        int c = image[0].size();
        
        fun(image, sr, sc, r, c,val, newColor );        //dfs fun
        
        return image;      
    }
    
    void fun(vector<vector<int>>& image, int sr, int sc, int r, int c, int val, int newColor) {
        
        if(sr<0 || sc<0 || sr == r || sc == c || image[sr][sc] == newColor || image[sr][sc] != val  ) return;
        
        image[sr][sc] = newColor;
        
        fun(image, sr+1, sc, r, c, val, newColor );        //dfs fun
        fun(image, sr-1, sc, r, c, val, newColor );        //dfs fun
        fun(image, sr, sc+1, r, c, val, newColor );        //dfs fun
        fun(image, sr, sc-1, r, c, val, newColor );        //dfs fun
    }
    
};
