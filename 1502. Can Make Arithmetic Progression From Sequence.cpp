class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        int diff =abs( arr[1] - arr[0] );
        cout << diff << endl ;
        //int j =1;
        for(int i=1, j=1; i<arr.size() ;i++, j++){
            cout << arr[i] << "  " << (arr[i-1] + diff) << endl;
            if(arr[i] != (arr[j-1] + diff))
                return false;
            //j++;
        }
        return true;
    }
};



//[1,3,5]     

//2, 2        if (3 > a[i-1] + diff)...break
