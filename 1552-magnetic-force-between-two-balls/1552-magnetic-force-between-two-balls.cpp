class Solution {
public:

//EXACTLY SIMILAR TO AGGRESIVE COWS 


    int fun(vector<int>& pos, int m , int guess){
        int balls = 1;
        int posn = pos[0];
        for(int i=0;i<pos.size();i++){
            int distance = pos[i]- posn;
            if(distance<guess)
                continue;
            else{
                balls++;
                posn = pos[i];
            }

        }

        if(balls>=m)
            return true;
        else
            return false;
    }
    int maxDistance(vector<int>& pos, int m) {
        int n = pos.size();
        sort(pos.begin(),pos.end());
        int low = 1;
        int high = pos[n-1] - pos[0];
        int res = 0;

        while(low<=high){
            int guess =(low+high)/2;

            if(fun(pos,m,guess)){
                res= guess;
                low = guess +1;
            }
            else
                high = guess - 1;
        }

        return res;
    }
};