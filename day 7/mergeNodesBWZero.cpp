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
class Solution
{
public:
    ListNode *mergeNodes(ListNode *head)
    {
        if (!head->next)
            return nullptr;

        ListNode *ptr = head->next;
        int sum = 0;
        while (ptr->val != 0)
            sum += ptr->val, ptr = ptr->next;

        head->next->val = sum;

        head->next->next = mergeNodes(ptr);

        return head->next;
    }
};

//  -- this was my code but don't know why not working --

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
// class Solution
// {
// public:
//     void f(ListNode *head, ListNode *ans, int sum)
//     {
//         if (!head->next)
//         {
//             sum += head->val;
//             ans->next = head;
//             return;
//         }
//         if (head->next->val == 0)
//         {
//             sum += head->val;
//             ans->next = head;
//             sum = 0;
//             f(head->next->next, ans, sum);
//         }
//         sum += head->val;
//         f(head->next, ans, sum);
//     }

// public:
//     ListNode *mergeNodes(ListNode *head)
//     {
//         ListNode *ans;

//         f(head, ans, 0);

//         return ans;
//     }
// };
