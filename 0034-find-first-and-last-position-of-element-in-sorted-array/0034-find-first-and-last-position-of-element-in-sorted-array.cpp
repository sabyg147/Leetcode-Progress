class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        //   FIRST POSITION OCCURANCE 

        int res1= -1;
        int low = 0;
        int high = nums.size()-1;

        while(low<=high){
            int guess = (low+high)/2;
            if(nums[guess]<target)
                low= guess +1;
            else if(nums[guess]>target)
                high = guess -1;
            else{
            
                res1 = guess;
                high = guess -1;
            }
            
        }


        //LAST POSTION OCCURANCE 
        int res2 = -1;
        low = 0;
        high = nums.size()-1;
        

       
        while(low<=high){
            int guess = (low+high)/2;
            if(nums[guess]<target)
                low= guess +1;
            else if(nums[guess]>target)
                high = guess -1;
            else{
            
                res2 = guess;
                low = guess + 1;
            }
            
        }
    return {res1,res2};
        
    }
};