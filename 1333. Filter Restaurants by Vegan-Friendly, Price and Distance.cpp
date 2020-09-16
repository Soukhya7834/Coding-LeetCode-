class Solution {
public:
    
    //Return the array of restaurant IDs after filtering, ordered by rating from highest to lowest
    //means first factor to see: ratings, if that is equal, then check based on IDs
    static bool cmp(const vector<int>& v1, const vector<int>& v2) {
        return v1[1] == v2[1] ? v1[0] > v2[0] : v1[1] > v2[1];
    }
    
    
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        vector<vector<int>> res;
        
        //very smart use of continue here. 
        for(int i = 0; i < restaurants.size(); i++) {
            if (!restaurants[i][2] && veganFriendly) continue; 
            //we wanna skip all those iterations which have are not meeting the needs
            if(restaurants[i][3] > maxPrice) continue;
            if(restaurants[i][4] > maxDistance) continue;
            res.push_back(restaurants[i]);
        }
        
        sort(res.begin(), res.end(), cmp);    //clever- sorting based on a specifc comparision. 
        
        
        //now wthat you have all the rests in a 2d vector, store just their corresponding indices in a 1d vector
        vector<int> ids;
        for(int i = 0; i < res.size(); i++) ids.push_back(res[i][0]);
        return ids;
    }
};
