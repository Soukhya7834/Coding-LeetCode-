class Solution {
public:
    int minSteps(string s, string t) {
        
        unordered_map<char,int>m;
        int sum=0;
        
        for(auto i:s)
            m[i]++;
        for(auto i:t)
            m[i]--;
        for(auto i:m){
            if(i.second<0)
                sum += i.second;
        }
        return abs(sum);
    }
};

/*
 
m[[a 1]  [b 2]]    then after t m=[[a -1]  [b 1]] 
                                   --m[i]   -m[i];
what this means is one "a" is less. So we increment sum, when any char count is <0. 
     we incremment sum by char count. Ex m[i] = -2, means there are 2  extra 'i' chars in t, so we need to remove them and replace with soem other val to make it anagram
     
*/
                                
                                   
    
