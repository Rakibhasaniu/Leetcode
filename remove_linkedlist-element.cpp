class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == NULL)
            return head;
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *tmp = dummy;

        while (tmp->next != NULL)
        {
            if (tmp->next->val == val)
            {
                ListNode *toDelete = tmp->next;
                tmp->next = tmp->next->next;
                delete toDelete;
            }
            else
            {
                tmp = tmp->next;
            }
        }
        head = dummy->next;
        delete dummy;
        return head;
    }
};
