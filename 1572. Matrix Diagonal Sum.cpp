class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int r = mat.size();
        int h = r/2;
        
        if(r == 0)
            return 0;
        
        if(h==0)
            return mat[0][0];
        
        int s1=0, s2=0;
        
        for(int i=0; i<r; i++){
            for(int j=0; j<r; j++){
                cout << "l1="<< mat[i][j] << "  ";
                if(i==j)
                    s1 += mat[i][j];
            }
        }
        
        cout << "\n"<< "s1=" << s1 << "\n";
        int j = 0;
        
        for(int i=0; i<r; i++){
            j=(r-i-1);
            cout << "l2="<< mat[i][j] << "  ";
            s2 += mat[i][j];
        }
        
        if(r % 2 != 0 )     //if its odd, then there's an intersection
            s2 -= mat[h][h];        //remove the middle elt
        cout << "\n" << "s2=" << s2 << "\n";

        return (s1 + s2);
    }
};

/*
https://www.youtube.com/watch?v=5yF2HkQXuSo&ab_channel=KnowledgeCenter
*/
