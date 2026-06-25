class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int,int> mpp;

        for (int i =0;i<n;i++){
            mpp[nums[i]]++;
        }
        for (int i=0;i<=n;i++){
            if (mpp[i]==0)
                return i ;
        }

    return -1;

        
    }
        
    
};