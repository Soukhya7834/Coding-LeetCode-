class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int c=0;
        for(int i =1; i< points.size(); i++){
            int x = points[i][0] - points[i-1][0];
            int y = points[i][1] - points[i-1][1];
            c +=  max(abs(x), abs(y));
        }
        return c;
    }
};
