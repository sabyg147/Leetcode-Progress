class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        vector<int> freq1(256,0) ;

        for(int i =0; i<s1.size();i++){
            freq1[s1[i]]++;
        }

        int k = s1.size();

        vector<int> freq2(256,0) ;
        int n =s2.size();

        if(k>n)
            return false;

        int low = 0;
        int high = k-1;

        for(int i=0;i<high;i++){
            freq2[s2[i]]++;
        }

        for(high=k-1;high<n;high++){
            freq2[s2[high]]++;

            if(freq1==freq2)
                return true;

            else{
                freq2[s2[low]]--;

                low++;

            }
        }

        return false;
        
    }
};