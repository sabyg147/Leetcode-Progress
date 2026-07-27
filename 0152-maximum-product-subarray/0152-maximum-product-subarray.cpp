class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxend = nums[0];
        int minend = nums[0];
        int res = nums[0]; ;

        for(int i =1 ; i<nums.size();i++){
            int v1 = nums[i];
            int v2 = maxend*nums[i];
            int v3 = minend*nums[i];

            int bestans = max(v1,max(v2,v3));
            int bestans_negative = min(v1,min(v2,v3));

            maxend = bestans;
            minend = bestans_negative;

            res  = max (res,bestans);
        }
        return res;
    }
};