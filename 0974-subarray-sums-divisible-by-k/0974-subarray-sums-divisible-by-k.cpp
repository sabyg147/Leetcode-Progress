class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum = 0;
        int res = 0;


        unordered_map<int,int> mp;

        mp[0]=1;

        for(int i = 0; i<nums.size();i++){
            sum += nums[i];
            int reminder = sum % k;

            if(reminder < 0)
                reminder = reminder - (-k);


            int freq = mp[reminder];
            res += freq;
            mp[reminder]++;
        }

        return res;
        
    }
};