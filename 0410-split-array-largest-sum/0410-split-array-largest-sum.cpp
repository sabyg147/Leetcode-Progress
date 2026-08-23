class Solution {
public:

    bool fun(vector<int>& nums, int k,int limit){
        int split = 1;
        int sum = 0;
        for(int i =0;i<nums.size();i++){
            if(sum+nums[i]<=limit)
                sum = sum + nums[i];
            else{
                split ++;
                sum = nums[i];
                if(split>k)
                    return false;
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        if(nums.size()<k)
            return -1;

        int low = *max_element(nums.begin(),nums.end());
        int high = 0;
        int res = -1;
        for(int i =0;i<nums.size();i++){
            high = high + nums[i];
        }

        while(low<=high){
            int guess = (low+high)/2;
            if(fun(nums,k,guess)){
                res = guess;
                high = guess - 1;
            }
            else
                low= guess + 1;
        }
        return res;
    }

    
};