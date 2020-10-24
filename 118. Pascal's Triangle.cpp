class Solution {
public:
    vector<vector<int>> generate(int n) {
        //num = {0};
        
        vector<vector<int>> num;
        if(n ==0 )
            return num;
            
        num.push_back({1});
        
        if(n ==1){
            return num;
        }
        
        for(int k = 1; k<n; k++){
            vector<int> row;
            row.push_back(1);
            int i =1;                
                while(i < k){
                    row.push_back(num[k-1][i-1] + num[k-1][i]);
                    i++;
                }
    
            row.push_back(1);
           // cout << "exit";
            num.push_back(row);

        }

        return num;
    }
};

/*

k = 0 to 4 for n=5;
k=0 ->   [ [1] ] ;
k=1 ->   [ [1], [1,1] ] ;   //while loop doesnt execute 

k=2 ->  i = 1     num[1][0]  + num[1][1] = 2;
[ [1], [1,1], [1,2,1] ] ;

k=3 ->  i = 1     num[2][0]  + num[2][1] = 1+2;
        i = 2     num[2][1]  + num[2][2] = 2+1;
        
for k =0, op = []  ;
for k =1, op = [[1]];   

...   */
