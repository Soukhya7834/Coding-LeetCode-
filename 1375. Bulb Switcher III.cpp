class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        int rightMax=-1, count =0;
        
        for(int i=0; i<light.size(); i++){
            if(light[i] > rightMax )
                rightMax = light[i];
        
        if(rightMax == i+1)
            count++;
        }
    return count;
    }
};
