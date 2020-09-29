class Solution {
public:
    int maxNumberOfBalloons(string text) {
         unordered_map<char, int> m;
        for (char i : text) 
            m[i] += 1;
        return min ( { m['b'] , m['a'] , m['l']/2 , m['o']/2 ,m['n'] } ) ;
    }
};


/*
ex 
1 b   3
1 a   2
2 l   7/2=3
2 o   9/2=4
1 n   5

since there are only 2 'a',we can have max 2 "baloon", so take min of all the 5 chars, ie b a l o n
*/
