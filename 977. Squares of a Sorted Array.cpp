class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> v;
        for(int i =0;i<A.size(); i++){
            v.push_back(abs(A[i]));
        }
        for(int i =0;i<A.size(); i++){
           cout << v[i] << endl;
        }
        sort(v.begin(), v.end());
        A.clear();
        for(int i =0;i<v.size(); i++){
            int r = pow(v[i], 2); 
            A.push_back(r);
        }
        return A;
    }
};
