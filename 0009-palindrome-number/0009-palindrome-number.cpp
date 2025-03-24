class Solution {
public:
    bool isPalindrome(int x) {
        string targetNum = std::to_string(x);
        string reversedNum;
        for (int x = targetNum.size() - 1; x >= 0; x--)
        {
            reversedNum += targetNum[x];
        }
        if (reversedNum == targetNum)
        {
            return true;
        }
        //std::cout << reversedNum << " " << targetNum << std::endl;
        return false;
    }
};