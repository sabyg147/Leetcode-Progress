class Solution {
public:

    static bool compare(pair<char,int>& a , pair<char,int>& b){
        return a.second > b.second;
    }
    
    string frequencySort(string s) {

    //CREATE A HASHMAP , WHICH WILL STORE ITS FREQUENCY

        unordered_map<char,int> f;

        for(int i=0;i<s.size();i++){
            f[s[i]]++;  // f['a] --> 3
        }

    // SINCE SORTING CANT BE DONE IN HASHMAP , TAKE VECTOR<PAIR<CHAR,INT>>
    // VECTOR<PAIR<CHAR,INT>> (A,3) (B,2)

        vector<pair<char,int>> v;

        for(auto it : f){//// auto it starting from f.begin till before f.end
            v.push_back({it.first,it.second});
            
            // v = [(a,3),(b,2),(c,1)]  a--> it.first  3-->it.second
        
        }


        sort(v.begin(),v.end() ,compare) ;
            // creating a custom sort fn which will sort based on freq where a.second i.e 3 > b.second i.e 2 )

        string res = "";

        for(int i = 0; i<v.size();i++){
            // GOES THROUGH EVERY CHARACTER IN V

            // 0 -> e , 2
                // 1 -> r ,1
                // 2 -> t , 1


            for(int j = 0 ; j < v[i].second ; j++){

                
                
                res += v[i].first ;
            }
        }
            


        return res;       


        
    }
};