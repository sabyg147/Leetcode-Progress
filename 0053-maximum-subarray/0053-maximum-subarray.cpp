class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestanswer = nums[0];
        int answer = nums[0];

        for(int i = 1 ; i< nums.size();i++){
            int  v1 = bestanswer + nums[i];
            int v2 = nums[i];
            bestanswer = max(v1,v2);
            answer = max(answer , bestanswer);
        }

        return answer ;
        
    }
};