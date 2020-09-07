class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int r= paths.size();
        unordered_set<string> s;
        for(auto& c:paths)
            s.insert(c[0]);    //enter only starting elts, ie source city at [0] position in each pair
        for(auto& c:paths)
                if(!s.count(c[1]))
                    return (c[1]);
            
        
        //check all destination city, ie city at [0] position in each pair
        
        //remember, there are 2 cities which are inique, one is the first src, second the last dest. 
        //here they ask for the dest 
        //there will be only 2 such city which are not both src & dest
        //so here we need to find the src
            return "";             
    }
};


/* if asked for src then modify as
for(auto& c:paths)
                if(!s.count(c[0]))
                    return (c[0]);
                    */
