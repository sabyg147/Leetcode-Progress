class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int max = 0;
        int i = 0;
        for(i=0;i<costs.size();i++){
           if (coins>=costs[i]){
            coins -=costs[i];
             max++;
           }
        }
        return max;
    }
};