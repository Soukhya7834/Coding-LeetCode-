class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> vect = nums1;
        int i=0, j=0, k=0;
        while(i<m && j<n){
            
        if(vect[i] < nums2[j] ){
            nums1[k] = vect[i];
            i++; k++;
        }
        else{
            nums1[k] = nums2[j];
            j++; k++;
            
        }

        }
        while(i < m)
            nums1[k++] = vect[i++];
        while(j < n)
            nums1[k++] = nums2[j++];
        
        return;
    }
};
