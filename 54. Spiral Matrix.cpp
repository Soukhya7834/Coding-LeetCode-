class Solution {
public:

vector<int> spiralOrder(vector<vector<int>>& A) {
    
    vector<int> ans;

    if(A.size() == 0)
        return ans; 
    
    int T,B,L,R,dir;
    T=0;
    B=A.size()-1;     //row size  -1 coz indexing starts from 0
    L=0;
    R=A[0].size()-1;      //colmn size  -1 coz indexing starts from 0
    dir=0;
    int i;
   
    while(T<=B && L<=R)     //very imp 
    {
        if(dir==0)
        {
            for(i=L;i<=R;i++)
                ans.push_back(A[T][i]);
            T++;
        }
        else if(dir==1)
        {
            for(i=T;i<=B;i++)
                ans.push_back(A[i][R]);
            R--;
        }
        else if(dir==2)
        {
            for(i=R;i>=L;i--)
                ans.push_back(A[B][i]);
            B--;
        }
        else if(dir==3)
        {
            for(i=B;i>=T;i--)
                ans.push_back(A[i][L]);
            L++;
        }
        dir=(dir+1)%4;
    }
    return ans;
        
    }
};

/*

        bool f=true;
        int m = mat.size();
        int n = mat[1].size();
        vector<int> res;

        for(int i=0; i< m; i++){
            
            if(f)
                for(int j=0; j <n; j++)
                    res.push_back(mat[i][j]);
            
            else
                for(int j=n-1; j>=0; j--)
                    res.push_back(mat[i][j]);
            
            f = !f;
        }
                
        return res;    my op- [1,2,3,6,5,4,7,8,9]
        
        */
