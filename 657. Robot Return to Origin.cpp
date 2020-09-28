class Solution {
public:
    bool judgeCircle(string moves) {
        
        int v = 0;
        int h = 0;
        
        for (auto ch: moves){
            switch(ch){
                case 'U' : v++; break;
                case 'D' : v--; break;
                case 'R' : h++; break;
                case 'L' : h--; break;
            } 
        }
        
        return (v == 0 && h == 0);
    }
};

//sequnece doesn't matter it should be equla no of L&R && U&D at end.
