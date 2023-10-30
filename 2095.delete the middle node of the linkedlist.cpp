class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {
        // Check if the linked list is empty
        if (head == nullptr)
        {
            return nullptr;
        }

        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *prev = nullptr;

        // Find the middle node using slow and fast pointers
        while (fast != nullptr && fast->next != nullptr)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Remove the middle node if found
        if (prev != nullptr)
        {
            prev->next = slow->next;
        }
        else
        {
            // If there is no previous node, slow is the head, update head
            head = slow->next;
        }

        delete slow; // Free the memory of the removed node (if needed)
        return head;
    }
};
