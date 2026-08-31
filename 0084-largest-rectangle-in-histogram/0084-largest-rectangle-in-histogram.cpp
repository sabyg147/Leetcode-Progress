class Solution {
public:
    vector<int> pse(vector<int>& heights ){
        int n = heights.size();
        vector<int> res(n,-1);

        stack<int> st;
        st.push(0);

        for(int i=1;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }

            if(st.empty())
                res[i] = -1;
            else
                res[i]= st.top();

            st.push(i);
            
        }

        return res;
    }


vector<int> nse(vector<int>& heights ){
        int n = heights.size();

        vector<int> res(n,n);

        stack<int> st;
        st.push(n-1);

        for(int i=n-2;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }

            if(st.empty())
                res[i] = n;
            else
                res[i]= st.top();

            st.push(i);
            
        }

        return res;
    }

    int largestRectangleArea(vector<int>& heights) {

            vector<int> pse_arr = pse(heights);
            vector<int> nse_arr = nse(heights);
                int res = 0;
                for(int i =0;i<heights.size();i++){
                    int area = heights[i]*(nse_arr[i]-pse_arr[i]-1);
                    res = max(res,area);
                }
            return res;
        
    }
};