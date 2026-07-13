class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        
        int rightsum = 0;
        for(int i = 0; i<nums.size();i++){
            rightsum +=nums[i];
        }
        int leftsum = 0;
        for(int i =0;i<nums.size();i++){
            int val = nums[i];
            rightsum -=val;
            if(leftsum==rightsum)
                return i;
            
            leftsum += val;
            

        }

        return -1;
    }
};