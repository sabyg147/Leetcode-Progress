class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n =nums.size();
        int low = 0 ;
        int high = 0;
        int res = 0;
        int zerocount= 0;

        for(high = 0; high< n; high++){
            if(nums[high]==0)
                zerocount++;

            while(zerocount>k){
                if(nums[low]==0)
                    zerocount--;

            low++;
                
            }

            if(zerocount<=k){
                int len = high - low + 1;
                res = max(res,len);
            }
        }
        return res;
        
    }
};