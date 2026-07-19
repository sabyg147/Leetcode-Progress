class Solution {
public:
    int characterReplacement(string s, int k) {
        int low = 0;
        int high = 0;
        int res = 0;

        vector<int> h(256,0);

        for(high = 0; high<s.size();high++){
            h[s[high]]++;
            int len = high - low + 1;
            int maxfreq = *max_element(h.begin(),h.end());
            int diff = len - maxfreq;

            while(diff>k){
                h[s[low]]--;
                low++;
                len = high - low + 1;
                maxfreq = *max_element(h.begin(),h.end());
                diff = len - maxfreq;
            }

            if(diff<=k){
                len = high - low + 1;
                res = max(res,len);
            }
        }
        return res;
        
    }
};