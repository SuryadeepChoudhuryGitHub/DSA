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
    ListNode* swapNodes(ListNode* head, int k) {
        int first_val;
        int last;
        int count = 0;
        ListNode* current = head;
        while (current != nullptr) {
            count++;
            if (count == k) {
                first_val = current -> val;
            }
            current=current->next;
        }
        last = count - k + 1;
        int second_val;
        count = 0;
        current = head;
        while (current != nullptr) {
            count++;
            if (count == last) {
                second_val = current->val;
                current->val = first_val;
                break;
            }
            current = current->next;
        }
        count = 0;
        current = head;
        while (current != nullptr) {
            count++;
            if (count == k) {
                current->val = second_val;
                break;
            }
            current = current->next;
        }
        return head;
    }
};