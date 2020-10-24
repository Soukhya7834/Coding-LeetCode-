class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int peak=0, valley =0, profit=0; 
        int days = prices.size();
        
        int  buy=0, sell=0;
        
        while(buy < days && sell < days){
            
            while(buy < days-1 && prices[buy] > prices[buy+1])
                buy++;
            
            sell=buy;
            
            while(sell < days-1 && prices[sell] < prices[sell+1])
                sell++;
            
             profit += prices[sell] - prices[buy];
            
            buy = sell+1;
        }
        return profit;
    }
};
