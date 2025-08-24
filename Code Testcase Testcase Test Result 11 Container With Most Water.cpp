class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int wt, ht, area, MostWater=0, left= 0, right = n-1;

       while(left<right)
            {
                wt = right - left;
                ht = min(height[left], height[right]);
                area = wt * ht;
                MostWater = max(MostWater, area);

                height[left]<height[right] ? left ++ : right--;
            }
        
        return MostWater;
    }
};
