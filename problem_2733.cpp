/*
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        int min = nums[0], max = nums[0];
        if (n <= 2 || n > 100) return -1;
        // Find the min and max
        for (int i = 1; i < n; i++) {
            if (nums[i] < 1 || nums[i] > 100) return -1;
            if (nums[i] < min) min = nums[i];
            if (nums[i] > max) max = nums[i];
        }

        // Find the non min or max
        for (int i = 0; i < n; i++) {
            if (nums[i] != min && nums[i] != max) return nums[i];
        }

        return 0;
    }
};
*/