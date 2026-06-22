class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int Max_Area= 0;

        while(i<j){
            int area = min(height[i],height[j]) * (j-i);
            Max_Area  = max (area,Max_Area);
            if (height[i]<height[j])
            i++;
            else 
            j--;
        }
        return Max_Area;
    }
};