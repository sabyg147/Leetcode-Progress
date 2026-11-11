class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> nums1;

        vector<int> nums2;


        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)
                nums1.push_back(nums[i]*nums[i]);
            else
                nums2.push_back(nums[i]*nums[i]);

        }
        int n = nums1.size();
        int m = nums2.size();

        vector<int> res;
        int a = n-1;
        int b = 0;
        while(a>=0 && b<m){
            if(nums1[a]<nums2[b]){
                res.push_back(nums1[a]);
                a--;
            }
            else{
                res.push_back(nums2[b]);
                b++;
            }
        }

        while(a>=0){
            res.push_back(nums1[a]);
            a--;
        }
        
        while(b<m){
            res.push_back(nums2[b]);
            b++;
        }

        return res;
    }
};