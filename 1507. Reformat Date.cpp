class Solution {
public:
    string reformatDate(string date) {
        
        string res = "";
        if(date.size() == 0)   return res;
        cout << date.size() << "  ";

             
        unordered_map<string, string> month = {{"Jan","01"}, {"Feb","02"}, {"Mar", "03"}, {"Apr", "04"}, {"May","05"},  {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}};
        
        if(date.size() == 13){
            
            string d = date.substr(0,2);
            string y = date.substr(9,4);
            string m0 = date.substr(5,3);
            string m = month[m0];
            //string m = to_string(m1);
            res = y + '-' + m + '-' + d ;
            
        }
        else{
            
            string d = date.substr(0,1);
            string y = date.substr(8,4);
            string m0 = date.substr(4,3);
            string m = month[m0];
            //string m = to_string(m1);
            res = y + '-' + m + '-' + '0' + d ;
        }
        
        //cout << d << "  " << m << "  "<< y;
        return res;
    }
};
