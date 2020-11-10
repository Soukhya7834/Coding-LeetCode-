class Solution {
public:
    bool isValid(string s) {
        
        stack<char> stack;
        for (auto c:s) {
            if (c == 'c') {
                
                if (stack.empty() || stack.top() != 'b') return false;
                stack.pop();
                    
                if (stack.empty() || stack.top() != 'a') return false;
                stack.pop();
                
            } else {
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
        
        
/*
        for(auto i=s.find("abc"); i!=string::npos; i=s.find("abc")){
            cout << i << "\t" << s << endl;
            s.erase(i,3);   //from ith pos, erase 3 chars ie 
        }
        return s.empty();  
        
        while (s.find("abc") >= 0)
            s = s.replace("abc", "");
    
    return (s == "");
    }
};

/*
best ex
"abcabcababcc"
stdout
0	abcabcababcc
0	abcababcc
2	ababcc
0	abc

*/
