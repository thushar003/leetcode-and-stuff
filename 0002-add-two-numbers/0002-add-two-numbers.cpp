/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // string revNum1, revNum2;
        // for (auto iter1 = l1; iter1 != nullptr; iter1 = iter1->next)
        // {
        //     revNum1 += std::to_string(iter1->val);
        // }
        // for (auto iter2 = l2; iter2 != nullptr; iter2 = iter2->next)
        // {
        //     revNum2 += std::to_string(iter2->val);
        // }
        // std::cout << revNum1 << " " << revNum2 << std::endl;
        // string sum = std::to_string(std::stoi(revNum1) + std::stoi(revNum2));
        // string revSum;
        
        // for (auto x = sum.end() - 1; x != sum.begin(); x--)
        // {
        //     revSum += *(x);
        // }
        // revSum += *sum.begin();
        // int finalSum = std::stoi(revSum);
        // ListNode* l3 = nullptr;
        // ListNode* current = nullptr;
        // for (char c : revSum)
        // {
        //     int digit = c - '0';
        //     ListNode* newNode = new ListNode(digit);

        //     if (l3 == nullptr)
        //     {
        //         l3 = newNode;
        //         current = l3;
        //     }
        //     else
        //     {
        //         current->next = newNode;
        //         current = newNode;
        //     }
        // }
        // // ListNode* l3 = new ListNode(finalSum);
        // return l3;

        ListNode* l3 = nullptr;
        ListNode* current = nullptr;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) 
        {
            int val1 = (l1 != nullptr) ? l1->val : 0;
            int val2 = (l2 != nullptr) ? l2->val : 0;
        
            int sum = val1 + val2 + carry;
            carry = sum / 10;
            int digit = sum % 10;

            ListNode* newNode = new ListNode(digit);

            if (!l3)
            {
                l3 = newNode;
                current = l3;
            }
            else
            {
                current->next = newNode;
                current = newNode;
            }
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
    }

    return l3;
    }
};