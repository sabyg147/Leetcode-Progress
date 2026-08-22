class Solution {
public:

    long long fun(vector<int>& piles , int speed){
        long long eat_h = 0;
        for(int i =0;i<piles.size();i++){
            eat_h = eat_h + (piles[i]/speed);
            if(piles[i]%speed != 0)
                eat_h ++;
        }

        return eat_h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int res = 0;
        while(low<=high){
            int guess = (low+high)/2;
            long long  eat_h =fun(piles,guess);
            if(eat_h>h)
                low = guess+1;
            else{
                res= guess;
                high = guess-1;
            }
        }
        return res;
    }
};