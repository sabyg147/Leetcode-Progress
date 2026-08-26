class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string res;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            }

            //DECIDE WHAT TO POP AND HOW MUCH TO POP 
            // IF THE TOP ELEMENT IS EQUAL TO THE S[I] THEN IGNORE S[I] AND POP THE LAST ELEMENT INSERTED 

            if(st.top()==s[i]){
                st.pop();
                continue;
            }

            //DECIDE WHAT TO PUSH 
            else
            st.push(s[i]);
        }

        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }

        reverse(res.begin(),res.end());
        return res;
        
    }
};