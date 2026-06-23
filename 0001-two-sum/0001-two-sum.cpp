class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mp;
        

        for (int i=0;i<n;i++){

            int need = target-nums[i]; 
            if(mp.find(need)!=mp.end()){  // find mp in hashmap , if not point to end it exists 
                return{mp[need],i}; // return need number already stored and its index 
            }
            mp[nums[i]]=i; // else store the number and its index
        }
        return {};
    }
};