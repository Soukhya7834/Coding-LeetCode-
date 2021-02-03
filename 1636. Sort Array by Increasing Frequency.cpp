class Solution {
public:
    vector<int> frequencySort(vector<int>& A) {
        unordered_map<int, int> count;
        for (int a: A)
            count[a]++;
        sort(begin(A), end(A), [&](int a, int b) {          //customized sort function
            return count[a] == count[b] ? a > b : count[a] < count[b];
        });
        return A;
    }
};

/*
 1. increasing order based on the frequency of the values : count[a] == count[b] ? a > b : 
 2. sort them in decreasing order : count[a] < count[b];
 
*/
