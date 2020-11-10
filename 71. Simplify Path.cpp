class Solution {
public:
    string simplifyPath(string path) {
        string res, t;
        vector<string> v;
        stringstream ss(path);
        
        while(getline(ss, t, '/')){      //while I'm still able to split
            if(t == "." || t == "")   continue;
            if(t == ".." && !v.empty())   v.pop_back();
            else if(t != "..")  v.push_back(t); //anything else, just push into stack;
        }
        
        for(auto x: v)  {
            res = res+"/"+x;
            cout << res << "\t";
        }
            
        return res.empty() ? "/" : res;
        
    }
};

/*

consider usign a vector instead of stack coz push_back, pop_back work in teh asame way. But the string concat is easier 

"/home//foo/" in thsi linesplitting "//f"  gives "", then "f"

best ex:
"/home//foo/"
stdout
/home	/home/foo	

*/
