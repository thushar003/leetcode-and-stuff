/**
 * Program Name: RemoveElement.cpp
 * @author: Thushar Joseph Joji
 * Date: 28 July, 2024
 * Purpose: To remove an element from a vector 
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
        int count = 0;
        for (int x : nums)
        {
            count++;
        }
        return count;
    }
};

int main()
{
    Solution sol;
    vector<int> vec1 = {1,2,3,4,5,3,3};
    sol.removeElement(vec1, 3);
}