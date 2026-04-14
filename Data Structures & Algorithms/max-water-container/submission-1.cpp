class Solution {
public:
    int maxArea(vector<int>& heights) {
        int size = heights.size();
        int maxSoFar = 0;
        for(int i = 0, j = size - 1; i < j; ){
            maxSoFar = max(maxSoFar, (j - i) * min(heights[i], heights[j]));
            if(heights[i] > heights[j]) j--;
            else i++;
        }
        return maxSoFar;
    }
};
