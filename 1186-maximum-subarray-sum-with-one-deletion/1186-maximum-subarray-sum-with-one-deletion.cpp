class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int no_del = arr[0];
        int one_del = INT_MIN;
        int ans = arr[0];

        for(int i = 1; i<arr.size();i++){
            int prev_nodel = no_del;
            int prev_onedel = one_del;

            no_del = max(no_del + arr[i],arr[i]);

            if(prev_onedel == INT_MIN)
                    one_del = prev_nodel;
            else
                    one_del = max (prev_onedel+arr[i],prev_nodel);

            ans = max(ans, max(no_del,one_del));
        } 

        return ans;
        
    }
};