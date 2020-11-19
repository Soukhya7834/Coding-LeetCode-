class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        int n = height.size();
        
        if (n==0) return 0;
        if (n==1) return height[0];
        
        height.push_back(0);            //coz we traverse till the last+1 element 
        n++;

        stack<int> s;                   //we nned to store index not values, why? See video 
        int i=0, j=0, h=0, ans=0;
        
        while(i<n){
        if( s.empty() || height[s.top()] < height[i] ) {
            cout << "pushed" << "  ";
            s.push(i++);
        }
        
        else {
            cout << "enter " << "  ";
            h = height[s.top()];
            s.pop();
            j = s.empty() ? -1 : s.top();         //just take top value, dont pop it yet
            ans = max(ans, h*(i-j-1));
            
            cout << h << "," << j << "," << ans << "  " ;
        }
        }
        
        return ans;
    }
};
