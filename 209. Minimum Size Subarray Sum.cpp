class Solution {
public:
    int minSubArrayLen(int s, vector<int>& a) {
        
        int l=0, r=0, sum =0, n=a.size(), len = 99999;
        while(r<n){
            sum += a[r++];
            while(sum >= s){
                len = min(len, r-l);
                sum -= a[l++];          //subtract a[l], then l++
            }
        }
           return (len == 99999)? 0 : len;        
    }
};


/*
7
2 3 1 2 4 3 

2 5 6 8         len=4
  3 4 6 10      len=4
    1 3 7       len=3
      4 7       len=2

https://www.youtube.com/watch?v=jKF9AcyBZ6E&ab_channel=NickWhite

*/
