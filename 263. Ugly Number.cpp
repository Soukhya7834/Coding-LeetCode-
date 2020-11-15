class Solution {
public:
    bool isUgly(int num) {
        for (int i=2; i<6 && num; i++){     //  2 3 "4" 5
            cout << "i=" << i << "  ";
          while (num % i == 0){
            cout << num << "  ";   //stmt 1
            num /= i;
            cout << num << "  ";    //stmt 2
          }
        }
        cout << "\n" << num ;
        return num == 1;   
    }
};

// 141-47   145-29
