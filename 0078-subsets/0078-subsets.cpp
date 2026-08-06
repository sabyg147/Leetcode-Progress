class Solution {
public:

    void soln(vector<int>& nums , int idx , int n , vector<int>& tmp , vector<vector<int>>& res){
        // BASE CASE
        if (idx==n){
            res.push_back(tmp);
            return ;
        }
        // 1ST CHOICE
        soln(nums,idx+1,n,tmp,res);

        // 2ND CHOICE
        tmp.push_back(nums[idx]);
        soln(nums,idx+1,n,tmp,res);
        tmp.pop_back();

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n =nums.size();
        
        vector<int> tmp;
        vector<vector<int>> res; ;
        soln(nums,0,n,tmp,res);
        return res;
        
        
    }
};