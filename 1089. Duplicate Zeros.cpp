class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        vector<int> res;
        
        for (auto x: arr ){
            if(res.size() >= arr.size())
                break;
            if(x == 0){
                res.push_back(0);
                res.push_back(0);
            }
            else
                res.push_back(x);
        }
        
        for(int i=0; i< arr.size(); i++)
                arr[i] = res[i];
        
        for(auto x: res)
            cout << x << " ";
        
        return ;
             
    }
};
