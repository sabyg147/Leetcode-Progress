class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        int n =nums.size();
        int zero = 0 ;
        int one = 0;
        int res = 0;

        unordered_map<int,int> mp;

        for(int i =0; i<n ; i++){

            if(nums[i]==0)
                zero++;
                
            else
                one ++;

        int diff = zero - one;


        if (diff == 0 )
            res = max(res , i+1);

        if(mp.find(diff)==mp.end())
            mp[diff]=i; // in hashmap store diff --> i
        else
            res = max(res ,i - mp[diff]);
        
        }

    return res;
        
    }
};