class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int currentTargetNum;
        vector<int> solNums;
        for (int i = 0; i < nums.size(); i++)
        {
            currentTargetNum = nums[i];
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    solNums.push_back(i);
                    solNums.push_back(j);
                    break;
                }
            }
        }
        return solNums;
    }
};