/*
 * Program Name: MergeAlternately.cpp
 * @author: Thushar Joseph Joji
 * Date: 25 July, 2024
 * Description: Given two strings, merge them such that each letter of the resulting string comprises of one letter from the first string, then one from the second, etc. etc. If one string is longer than the other, the remaining letters of the longer string should all be added to the end of the resulting string.
 */

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3 = "";
        if (word1.size() < word2.size())
        {
            for (int i = 0; i < word1.size(); i++)
            {
                word3 += word1[i];
                word3 += word2[i];
            }
            //word3 += word2.substr(word1.length() - 1, word2.length() - word1.length());
            word3 += word2.substr(word1.size() - 1);
        }
        else if (word1.size() > word2.size())
        {
            for (int i = 0; i < word2.size(); i++)
            {
                word3 += word1[i];
                word3 += word2[i];
            }
            //word3 += word1.substr(word2.length() - 1, word1.length() - word2.length() - 1);
            word3 += word1.substr(word2.size() - 1);
        }
        else if (word1.size() == word2.size())
        {
            for (int i = 0; i < word1.size(); i++)
            {
                word3 += word1[i];
                word3 += word2[i];
            }
        }
        return word3;
    }
};

int main()
{
    Solution sol1;
    std::cout << sol1.mergeAlternately("abc", "pqr") << std::endl;
}