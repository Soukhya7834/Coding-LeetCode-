class Solution {
public:
    int scoreOfParentheses(string S) {
        int score=0;
        stack<int> s1;
        for(auto x:S){
            if(x == '('){
                s1.push(score);         //push the old score val & now reset to 0
                score =0;
            }
            else{
                cout << s1.top() << "  ";
                score = s1.top() + max(1, 2*score);
                cout << "s=" << score << "\t" ;
                s1.pop();
                
            }
        }
        return score;
    }
};


