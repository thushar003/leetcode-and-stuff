class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> operationsCount;
        vector<int> nums;
        for (auto row: grid)
        {
            for (int num : row)
            {
                nums.push_back(num);
            }
        }

        sort(nums.begin(), nums.end());
        int targetNum = nums[nums.size() / 2];
        for (int num : nums)
        {
            if (abs(num - targetNum) % x != 0)
            {
                return -1;
            }
        }
        
        int totalOperations = 0;
        for (int num : nums)
        {
            totalOperations += abs(num - targetNum) / x;
        }

        return totalOperations;
    }
};