class Solution {
public:

    bool fun(vector<int>& weights, int days, int guess){
        int day = 1;
        int weight = 0;
        for(int i=0;i<weights.size();i++){
            if(weight + weights[i]<=guess)
                weight = weight + weights[i];
            else{
                day ++;
                weight = weights[i];
                if(day>days)
                    return false;
            }
        }

        return true;

    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = 0;
        int res = 0;

        for(int i=0;i<weights.size();i++){
            high = high + weights[i];
        }
        while(low<=high){
            int guess = (low+high)/2;
            
            if(fun(weights,days,guess)){
                res = guess;
                high = guess -1;
            }
            else
                low = guess + 1;
        }

        return res;
        
    }
};