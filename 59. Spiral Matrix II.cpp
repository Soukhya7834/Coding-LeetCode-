class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
            
            vector<vector<int> > ret( n, vector<int>(n) );
        	int k = 1, i = 0;       //i= row count
        	
            while( k <= n * n )    //generate a square matrix filled
        	{
        		int j = i;          //colmn count
                    // four steps
        		
                while( j < n - i )        //j= 0 1 2 <3         // 1. horizonal, left to right
        			ret[i][j++] = k++;
        		
                j = i + 1;                //j=0+1=1    &  i=0 still
                
                    //(j < 3-0)   j=3     but j is already 2   j = 1 2 <3 
                                                                                                                                                                                                  
                while( j < n - i )             // 2. vertical, top to bottom
        			ret[j++][n-i-1] = k++;      ret [0][3-0-1] =r[1][2]   r[2][2]
        		
                    j = n - i - 2;          //j=3-0-2=1   //j moves 1 colm left   from 2->1
        		
                while( j > i )                //j=1  & i=0   3. horizonal, right to left    
        			ret[n-i-1][j--] = k++;       //r[3-0-1][1--]      r[2][1]   r[2][0]    fails for r[2][-1]
        		  
                j = n - i - 1;
        		
                while( j > i )                  // 4. vertical, bottom to  top 
        			ret[j--][i] = k++;
        		i++;      // next loop
        	}
        	return ret;
    }
};

[i 0  2  3
 
 [ 1, 2, 3 ],    j=0
 [ 8, 9, 4 ],    j=1
 [ 7, 6, 5 ]     j=3
]



 r[0][0]
