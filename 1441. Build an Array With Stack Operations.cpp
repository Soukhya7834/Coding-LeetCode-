class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> st;
        vector<string> v;
        int i=1, l=0;
        int x = target.size();
        
        //for(int l=0; l<x; l++){
        while(i !=  target[x-1]){
            st.push(i);
            if(st.top() == target[l]){
                v.push_back("Push"); 
                l++;}
            
            else{
                v.push_back("Push");
                v.push_back("Pop");
            }
        
            i++;
        }
        v.push_back("Push");

        return v;
    }
};
