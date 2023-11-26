class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min= prices[0];
        int profit=0, maxp =0;
        for(int i=0 ; i< prices.size() ; i++){
            if(prices[i] < min) 
            {
                min=prices[i];
               
            }
            else
            {
                 profit =  prices[i] - min;
                 if(profit>maxp)
                 maxp=profit;
            }
            
        }
        return maxp;
    }
};