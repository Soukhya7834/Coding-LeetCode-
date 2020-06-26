class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        int n = deck.size();
        int i = 0, flag = 0, count = 0;
        bool marked[n];
        vector<int> div[];

        for ( i = 2; i <= n/2; i++)
            if (n%i == 0) div.push_back(i);
        
        int count = div.size();
        
        for(int i=0;i<n ;i++)
           marked[i] = false;
        
        for ( i = 0; i < n; i++) {
            in = count(deck.i+1, deck.end(), deck.i);
            for ( int  j = i+1; j < n; j++){
                if ((deck[i] == deck[j]) && (!marked[i]) && (!marked[j])) {
                    marked[i] = true;
                    marked[j] = true;
                }
            }
        }
        
        for ( i = 0; i < n; i++)
            if (!marked[i]) return false;
        return true;      
    }
};