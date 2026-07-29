class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsum= nums[0];
        int minsum = nums[0];
        int ans = abs(nums[0]);
        for(int i =1;i<nums.size();i++){
            

            maxsum = max(nums[i],maxsum+nums[i]);

            minsum = min(nums[i],minsum+nums[i]);

            int abssum = max(abs(maxsum),abs(minsum));
            

            ans = max(ans,abssum);

        }

        return ans;
        
    }
};