class Solution {
public:

    void solve(string digits, int idx , int n ,string& tmp, vector<string>& res,unordered_map<char,string> &f){
        if(idx==n){
            res.push_back(tmp);
            return;
        }

        string t = f[digits[idx]];
        for(int j=0;j<t.size();j++){
            // backtracking adding option part 
        tmp.push_back(t[j]);
        solve(digits,idx+1,n,tmp,res,f);
        tmp.pop_back();
        }
        }
        
    
    vector<string> letterCombinations(string digits) {
        
        if(digits.empty())
            return {};

        
        unordered_map<char,string> f;
        f['2'] = "abc";
        f['3'] = "def";
        f['4']= "ghi";
        f['5']="jkl";
        f['6']="mno";
        f['7']="pqrs";
        f['8']= "tuv";
        f['9']="wxyz";

        int n = digits.size();
        string tmp = "";
        vector<string> res;
        solve(digits,0,n,tmp,res,f);
        return res;
        
    }
};