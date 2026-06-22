class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort (nums.begin(),nums.end());
        int n = nums.size();

        int MinDiff = INT_MAX;
        int closest = 0;

        for (int i = 0; i<n-2;i++){
            int j = i+1;
            int k = n-1;

        while(j<k){
            int sum = nums[i]+nums[j]+nums[k];
            int diff = abs(sum-target);

            if(diff<MinDiff){
                MinDiff = diff;
                closest = sum;
            }

            if(sum==target)
                return sum;
                else if (sum<target)
                    j++; 
                else
                    k--;
                }

        }
        return closest;
    }
};