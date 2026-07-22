class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res = 0;
        int sum = 0;
        unordered_map<int,int> mp;
        mp[0]=1; // store the sum 0 in hashmap 

        for(int i =0;i<nums.size();i++){ // start loop till n-1
            sum+=nums[i]; // sum = sum + nums[i]
           
            int req = sum - k; // sum - k 
            
            int freq = mp[req]; // check freq of sum-k in hashmap 
            

            res += freq; // res + freq

            mp[sum]++; // update the sum in hashmao

        }

        return res;
        
    }
};