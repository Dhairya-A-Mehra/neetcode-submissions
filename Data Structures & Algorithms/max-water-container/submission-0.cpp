class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int maxWater = 0;

        while (i < j) {
            int h = min(heights[i], heights[j]);
            int width = j - i;

            maxWater = max(maxWater, h * width);

            if (heights[i] < heights[j]) {
                i++;
            } else {
                j--;
            }
        }

        return maxWater;
    }
};
