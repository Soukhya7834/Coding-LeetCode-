class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        //maintain 2 iterators
        
        for(int i=0, j=0; i<A.size(); i++)
            if(A[i] %2 ==0 )    swap(A[j++], A[i]);     //j will swap only if some even no is found 

        return A;
     
    }
};


/*
[3,1,2,4]   j=0;

[2,1,3,4]   j=1;

j moves when theres a swap


Ex :
i=0  [3,2,1,4]  j=0;  [2,3,1,4];

i=1  [2,3,1,4]  j=1;  [2,3,1,4];

i=2  [2,3,1,4]  j=1;  [2,3,1,4];

i=3  [2,3,1,4]  j=1;  [2,4,1,3];

[2,4,1,3]  j=2; end; 

Ex 2:
i=0  [2,3,1,4]  j=0;  [2,3,1,4];  //2 swapped with self

i=1  [2,3,1,4]  j=1;  [2,3,1,4];

i=2  [2,3,1,4]  j=0;  [2,3,1,4];

i=3  [2,3,1,4]  j=1;  [2,4,1,3];


j=2;  [2,4,1,3]; end

no matter what, it swaps a way that j always stops at an odd no - beauty

*/

