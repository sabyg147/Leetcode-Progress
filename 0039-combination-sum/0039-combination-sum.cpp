class Solution {
public:

    void soln(vector<int>& candidates,int n, int idx , vector<int>& tmp, vector<vector<int>>& res, int sum , int target){
        //BASE CASE 
        if (sum==target){
            res.push_back(tmp);
            return;
        }
        if(idx==n)
            return;

        // Dont Take 

        soln(candidates,n,idx+1,tmp,res,sum,target);

        // TAKE TILL SUM+A[IDX]<=TARGET
        if(sum + candidates[idx] <=target){
        tmp.push_back(candidates[idx]);
        sum+=candidates[idx];

        soln(candidates,n,idx,tmp,res,sum,target);

        sum-=candidates[idx];
        tmp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n =candidates.size();
        vector<int> tmp;
        vector<vector<int>> res;
        int sum = 0;
        soln(candidates,n,0,tmp,res,sum,target);
        return res;

        
    }
};