
class Solution
{
public:
    int si(ListNode *head)
    {
        ListNode *tmp = head;
        int count = 0;
        while (tmp != NULL)
        {
            count++;
            tmp = tmp->next;
        }
        return count;
    }
    ListNode *middleNode(ListNode *head)
    {
        int size = si(head);
        ListNode *tmp = head;
        for (int i = 1; i <= size / 2; i++)
        {
            tmp = tmp->next;
        }
        return tmp;
    }
};