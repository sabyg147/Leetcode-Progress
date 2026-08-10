class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if(prices.size()<2)
            return {};
        
        vector<int> diff;
        for(int i =0;i<prices.size()-1;i++){
        diff.push_back( prices[i+1]-prices[i]);
        }
        // DIFF ARRAY IS CREATED , FROM HERE USE KADANES TO FIND MAX SUBARRAY SUM



        //KADANES ALGORITHM

        int best_profit = diff[0];
        int ans = diff[0];

        for(int i=1;i<diff.size();i++){
            best_profit = max(best_profit+diff[i],diff[i]);
            ans = max(ans,best_profit);
        }

        if(ans<0)
            ans = 0;
        return ans;
        
    }
};