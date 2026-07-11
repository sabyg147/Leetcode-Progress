class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

       int n = nums.size();
       
       for(int i =0; i<n;i++){

        // for loop , check each element and swap them in their correct position
        while(nums[i]>0 && nums[i]<=n && nums[i] != nums[nums[i]-1]){
            // ignore negative , check no is present inside the range , check whether number is already present in its correct position

            swap(nums[i],nums[nums[i]-1]);
        }
       }

       for(int i =0 ; i< n ; i ++){
        // find the first incorrect postion 
        if(nums[i] != i+1)
            return i+1;       
       }
        

        return n + 1;
    }
};