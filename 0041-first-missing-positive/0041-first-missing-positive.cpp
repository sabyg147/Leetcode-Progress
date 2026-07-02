class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        unordered_map<int, int> mp;

        // Store all positive numbers
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0)
                mp[nums[i]]++;
        }

        // Find first missing positive
        for (int i = 1; i <= nums.size(); i++) {
            if (mp.find(i) == mp.end())
                return i;
        }

        return nums.size() + 1;
    }
};