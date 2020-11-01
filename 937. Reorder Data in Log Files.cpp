class Solution {
public:
        
    static bool myCompare(string a, string b){
        
        int i = a.find(' ');        //always finds the first space
        int j = b.find(' ');
        
        if(isdigit(a[i + 1]))
            if(isdigit(b[j + 1]))
                return false;       // a b are both digit logs, a == b, keep their original order
            else
                return false;       // a is digit log, b is letter log, a > b
        else
            if(isdigit(b[j + 1]))
                return true;        // a is letter log, b is digit log, a < b
            else {                     // both letter log
                if (a.substr(i) == b.substr(j))
                    return a.substr(0,i) < b.substr(0,j); //If string part is the same, compare key
                else
                    return a.substr(i) < b.substr(j);   // else normal lexographic comparision a and b are both letter
            }
    }
    
    vector<string> reorderLogFiles(vector<string>& logs) {
        
        //The order of equal elements is guaranteed to be preserved in stable_sort.
        //Use sort() cannot pass the OJ. 
        
        stable_sort(logs.begin(), logs.end(), myCompare);
        return logs;
    }
};
//https://leetcode.com/problems/reorder-data-in-log-files/discuss/193656/C++-stable_sort-easy-to-understand/269075

//a="dig1 8 1 5 1",  b="let1 art can"    b ="dig2 3 6"
