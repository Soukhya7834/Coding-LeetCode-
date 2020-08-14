class Solution {
public:
    double average(vector<int>& s) {
        //sort(s.begin(), s.end());
        int n = s.size();
       //double a1 = (s[0] + s[n-1]) / 2;
        double a2 = (accumulate(s.begin(), s.end(), 0.0) - *min_element(s.begin(), s.end()) - *max_element(s.begin(), s.end())) / (n-2) ;
        return (a2);
    }
};
