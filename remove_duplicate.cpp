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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_set<int> uniqueValues;
        ListNode* prev = NULL;
        ListNode* current = head;

        // Handle duplicates at the beginning of the list
        while (current != NULL && uniqueValues.find(current->val) != uniqueValues.end()) {
            ListNode* temp = current;
            current = current->next;
            delete temp;
        }

        // Update head pointer
        head = current;
        prev = current;

        // Traverse the rest of the list
        while (current != NULL) {
            if (uniqueValues.find(current->val) != uniqueValues.end()) {
                prev->next = current->next;
                delete current;
                current = prev->next;
            } else {
                uniqueValues.insert(current->val);
                prev = current;
                current = current->next;
            }
        }

        return head;
    }
};
