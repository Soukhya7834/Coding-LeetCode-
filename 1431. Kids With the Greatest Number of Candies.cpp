class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> vec;
        int maxi = *max_element(candies.begin(), candies.end());
        
        for(int i = 0; i< candies.size(); i++){
            if((candies[i] + extraCandies) >= maxi)
                vec.push_back(true);
            else 
                vec.push_back(false);

        }
        return vec;
    }
};
