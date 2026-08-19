class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int res = 0;

        while(low<=high){
            int guess = (low+high)/2;

            if(nums[guess]==target)
                return guess;


            //PART 2 : GUESS ELEMENT IS IN THE  ROTATED PART (K)
            else if(nums[guess]>nums[n-1]){

                    // IF TARGET IS GREATER THAN THE GUESS NUMBER , THE GREATER NUMBERS ARE ONLY PRESENT IN THE RIGHT SIDE OF THE GUESS
                    if(nums[guess]<target)
                        low = guess + 1;
                    
                    else if(nums[guess]> target){

                        if(nums[0]>target){ // TARGET LIES IN THE 1ST PART , N-K PART SO WE NEED TO CHECK RIGHT PART 
                            low = guess + 1;

                        } 
                        else  // TARGET LIES IN THE 2ND PART ONLY , CHECK LEFT PART 
                            high = guess -1;

                    }

            }
            // PART 3: GUESS ELEMENT LIES IN THE 1ST PART , THE NON ROTATED PART N-K
            else{
                    if(nums[guess]>target)
                        high = guess - 1;
                    else if(nums[guess]<target){
                        //GREATER ELEMENT CAN LIE ON BOTH RIGHT AND LEFT

                        if(nums[n-1]<target){
                            // Target lies in the part 1 , so move right 
                            high = guess -1;
                
                        }
                        else
                            low = guess + 1;
                    }
            }
        }

        return -1;
        
    }
};