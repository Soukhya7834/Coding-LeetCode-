class Solution {
public:
    int findLHS(vector<int>& nums) {
        
        unordered_map<int,int>m;
        int res = 0;
        
        for(auto i: nums){
            m[i]++;
            if(m.count(i+1))
                res = max(res, m[i] + m[i+1]);
            if(m.count(i-1))
                res = max(res, m[i] + m[i-1]);
        }
        return res;   
    }
};
/*
Came up with same logic too. 
    
A   =   [1,3,2,2,5,2,3,7]    
    
map =   [(1, 0), (2,0), (3,0), (5,0), (7,0)]  

1 res = 1 + 0 = 1, res = 1;    [(1, 1), (2,0), (3,0), (5,0), (7,0)]

3 res = 1 + 0 = 1, res = 1;    [(1, 1), (2,0), (3,1), (5,0), (7,0)]

2 (for m[i+1] ) res = 1 + 1 = 1, res = 2;    [(1, 1), (2,1), (3,1), (5,0), (7,0)]
   (for m[i-1] )  res = 1 + 1 = 2, res = 2;

2 (for m[i+1] ) res = 2 + 1 = 3, res = 3;    [(1, 1), (2,2), (3,1), (5,0), (7,0)]
    (for m[i-1] )  res = 2 + 1 = 3, res = 3;

5 res = 1 + 0 = 1, res = 3;    [(1, 1), (2,2), (3,1), (5,1), (7,0)]

2 (for m[i+1] ) res = 3 + 1 = 4, res = 4;    [(1, 1), (2,3), (3,1), (5,1), (7,0)]
    (for m[i-1] )  res = 3 + 1 = 4, res = 4;

3 (for m[i+1] ) res = 3 + 2 = 5, res = 5;    [(1, 1), (2,3), (3,2), (5,1), (7,0)]
   

7 res = 1 + 0 = 1, res = 5;    [(1, 1), (2,3), (3,2), (5,1), (7,1)]
(no 6 or 8)
    
map =   [(1, 1), (2,3), (3,2), (5,1), (7,1)] 
If you have smtg like this [1 1 4 2 3 5 7 3 3 2]

*/
