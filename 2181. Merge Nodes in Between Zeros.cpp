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
        if (head == NULL)
            return head;
        ListNode *pre = head;
        ListNode *cur = head->next;
        int sum = 0;
        while (cur != NULL)
        {
            if (cur->val != 0)
            {
                sum = sum + cur->val;
            }
            else
            {
                cur->val = sum;
                sum = 0;
                pre->next = cur;
                pre = cur;
            }
            cur = cur->next;
        }

        head = head->next;
        return head;
    }
};