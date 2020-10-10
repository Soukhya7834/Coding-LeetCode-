
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> next(n, -1);
        stack<int> s; // index stack
        
        for (int i = 0; i < n * 2; i++) {
            
            int num = nums[i % n]; 
            cout << "num=" << num << " ";       //0 1 2 2 1 1        0 1
            
            while (!s.empty() && nums[s.top()] < num) {
                cout << "\t" << "enter" << " " << s.top()<< " " << nums[s.top()] <<  "<" << num << "\t";
                next[s.top()] = num;
                s.pop();
            }
            if (i < n) s.push(i);   // 0 1 2 <3
            cout << "s.top()=" << s.top() << "\n";
            
            for(auto x:next)
                cout << x << " " ;
            
            cout << " itr done "<< "\n";
        }   
        return next;
    }
};

/*
[1,2,1]    0 1 2 3 4 5  ;        st=  0 1 2 2 1 1 
int num = nums[0%3]=nums[0] 
int num = nums[1%3]=nums[1]
int num = nums[2%3]=nums[2] 
int num = nums[3%3]=nums[0] 
int num = nums[4%3]=nums[1] 
int num = nums[5%3]=nums[2]


so basically, when loop starts for second time, we traverse all over agin from nums[0] to nums[n-1]  for the last elt ie. nums[n-1]


*/
