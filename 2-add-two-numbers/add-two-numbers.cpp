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
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
        int extra = 0;
        ListNode* head = new ListNode(0);  
        ListNode* current = head;

        while (first != nullptr || second != nullptr || extra != 0) {
            int total = extra;

            if (first != nullptr) {
                total += first->val;
                first = first->next;
            }

            if (second != nullptr) {
                total += second->val;
                second = second->next;
            }

            extra = total / 10;
            current->next = new ListNode(total % 10);
            current = current->next;
        }

        return head->next;
    }
};
