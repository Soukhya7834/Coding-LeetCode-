class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        
        int i = 1, m = name.length(), n = typed.length();
        cout << "m=" << m << "n=" << n << endl;
        for (int j = 1; j < n; j++)
            if (i < m && name[i] == typed[j]){
                i++;
                cout << i << " "; 
            }
            else if (!j || typed[j] != typed[j - 1]){
                cout << "enter";
                return false;
            }
        return i == m;
    }
};
