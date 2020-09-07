class Solution {
public:
    bool buddyStrings(string A, string B) {
        
        //Firstly, check if the size is not equal, then directly its  
        if (A == B)
            return (set<char>(A.begin(), A.end()).size() < A.size()); // swap same letters in A
        
        //ex: A=aaab, B=aaab   set = ab, size=2<4  means we can swap any two duplicates, ie here swap "aa"ab or a"aa"b or "a"a"a"b ....no rules that they should be adjacent 
        
        //ex: A=abab, B=abab   set = ab, size=2<4  means we can swap any two duplicates, ie "a"b"a"b here.  ....no rules that they should be adjacent
        
        //ex: A=ababc, B=ababc   set = ab, size=3<5  means we can swap any two duplicates, ie "a"b"a"b here or a"b"a"b"   ....no rules that they should be adjacent
        
        // even if there's one duplicates just swap them thats all we need 
        
        // the set size being even one number less than the original string's size, means that there is atleast one pair of duplicates....we're sorted then
        
        //ex: A=abcd, B=abcd   set = ab, size=4<4  means we can swap any two duplicates, condition  broken here. 
        int n = A.length();        

        int l = 0, r = n-1;
        
        while(l < n && A[l] == B[l])       
            l++;
        while(r >= 0 && A[r] == B[r])
            r--;
        if(l < r)
            swap(A[l], A[r]);
        
        
        //Now for examples where all chars of string are not unique, but A != B,  ex: A=abba   B=abab,
        // Then l=0 points to start, r=n-1 points to end....l moves right till it finds smtg not equal. So l moves till 0 1 2
        // In A, r[n-1] = a, but in B, r[n-1] = b, so r is unmoved 
        //Now swap l&r in A only, so ab"ab"(A) = abab(B).. Done :)
        
        
        //Now for examples where all chars of string are unique, but A != B,  ex: A=abcd   B=abdc,
        // Then l=0 points to start, r=n-1 points to end....l moves right till it finds smtg not equal. So l moves till 0 1 2
        // In A, r[n-1] = d, but in B, r[n-1] = c, so r is unmoved 
        //Now swap l&r in A only, so ab"dc"(A) = abdc(B).. Done :)
        
        
        return A == B;       
    }
};
