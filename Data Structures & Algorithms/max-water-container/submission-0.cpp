class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxA = 0;
        int l=0;
        int r = heights.size()-1;
        while(l<r){
            int ar = (r-l) * min(heights[l],heights[r]);
            maxA = max(maxA,ar);
            if(heights[l]>heights[r]){
                r--;
            }else{
                l++;
            }
        }
        return maxA;
    }
};
