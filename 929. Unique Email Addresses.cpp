class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        if(emails.size() == 0)
            return 0;
        
        unordered_set<string>  s;
       
        for(auto w: emails){
            string res;
            string x = w;
            int i=0; 
            
            if (x.find('+') != string::npos){
            while(x[i] != '+' ){
                     if(x[i] == '.')
                         i++;
                    
                      res += x[i++];
            }
            
            while(x[i] != '@')
                i++;
            
            while(i < x.length())
                res += x[i++];
        }
        else{
                while(x[i] != '@'){
                    if(x[i] == '.')
                        i++;
                    res += x[i++];
                }
                while(i < x.length())
                    res += x[i++];
            
        }
            
            s.insert(res);
        }
        
        for(auto i:s)
            cout << i << " \n";
        
        return s.size();
        
        //return 0;
            
    }
};
