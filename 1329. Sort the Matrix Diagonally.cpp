class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        unordered_map<int, vector<int> >  mp;
        
        int m = mat.size(); //row size
        int n = mat[0].size(); //colm size

        for(int i =0;i< m ;i++){
            for(int j =0; j < n ; j++){
                int diff = i-j;
                mp[diff].push_back(mat[i][j]);
            }
        }
        
        for(int k = -(n-1); k < m ; k++)
            sort(mp[k].begin(), mp[k].end());
    
        for(int i =m-1;i>=0 ;i--){
            for(int j =n-1; j>=0 ; j--){
                 
         //for(int i =0;i< m ;i++){
            //for(int j =0; j < n ; j++){
                int diff = i-j;
                mat[i][j] = mp[diff].back();
                mp[diff].pop_back();
            }
         }
             return mat;
    }
};

/*
Ex : in the youtube video https://www.youtube.com/watch?v=iSBgmQCTN8g&t=254s

the size goes from [ -3, -2, -1, 0, 1, 2 ]  ie, for(int k = -(n-1); k < m ; k++)

//for(int i =0;i< m ;i++){
            //for(int j =0; j < n ; j++){ 
            
you cant use these forward loops, coz we're trying to add elts from back( from mp), and assign that to mat[i][j], basically remove from back i n mp, the  add from back in mat[i][j]

Idk why its not working other way around


 so this aint possible  
        //for(int i =0;i< m ;i++){
            //for(int j =0; j < n ; j++){
                int diff = i-j;
                mat[i][j] = mp[diff][0];
                mp[diff].pop_front();
            }
         } 
 Wanted to try this, but not working for some reason 

*/
    
