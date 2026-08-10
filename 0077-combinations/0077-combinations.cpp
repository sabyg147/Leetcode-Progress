class Solution {
public:

    void fun(int n,int k, int start, vector<int>& tmp,vector<vector<int>>& res){
        if(tmp.size()==k){
            res.push_back(tmp);
            return;
        }

        for(int i=start;i<=n;i++){
            tmp.push_back(i);
            fun(n,k,i+1,tmp,res);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> tmp;
        vector<vector<int>> res;
        fun(n,k,1,tmp,res);
        return res;
        
    }
};