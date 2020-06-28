class Solution {
public:
    bool checkOverlap(int radius, int x_center, int y_center, int x1, int y1, int x2, int y2) { 
        int xr = x_center + radius;
        int yr = y_center + radius;
        int xr2 = x_center - radius;
        int yr2 = y_center - radius;
        
        int flag = 0;
        //1. (xr, y_center)  2. ( x_center, yr)
                //3. (xr2, y_center)  4. ( x_center, yr2)
        
        if((xr >= x1 && xr <= x2) || (xr2 >= x1 && xr2 <= x2)){ 
            //flag = 1;
        
            if((yr >= y1 && yr <= y2) || (yr2 >= y1 && yr2 <= y2))
                flag = 1;
        }
        
        if((x1 >= xr2 && x1 <= xr) || (x2 >= xr2 && x2 <= xr)){ 
            //flag = 1;
        
            if((y1 >= yr2 && y1 <= yr) || (y2 >= yr2 && y2 <= yr))
                flag = 1;
        }
        
        if(flag == 0)
            return false;
        else 
            return true;
         
        
    }
};
