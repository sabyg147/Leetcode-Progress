class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        int n = nums.size();

        for(int i = 0; i < n - 2; i++) {

            if(i > 0 && nums[i] == nums[i - 1])
                continue;

            int j = i + 1;
            int k = n - 1;
            int sum = -nums[i];

            while(j < k) {

                if(nums[j] + nums[k] == sum) {

                    ans.push_back({nums[i], nums[j], nums[k]});

                    j++;
                    k--;

                    while(j < n && nums[j] == nums[j - 1])
                        j++;

                    while(k>0  && nums[k] == nums[k + 1])
                        k--;
                }

                else if(nums[j] + nums[k] < sum)
                    j++;

                else
                    k--;
            }
        }

        return ans;
    }
};