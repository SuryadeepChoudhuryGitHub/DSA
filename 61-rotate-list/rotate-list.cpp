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
    ListNode* rotateRight(ListNode* head, int k) {
        int i = 0;
        if (head == NULL) {
            return head;
        }
        int n = 0;
        ListNode* test = head;
        while (test != NULL) {
            n++;
            test = test->next;
        }

        if (k >= n) {
            k = k%n;
        }

        while (i < k) {
            ListNode* current = head;
            while (current->next != NULL) {
                if (current->next->next == NULL) {
                    ListNode* temp = current->next;
                    current->next = NULL;
                    temp->next = head;
                    head = temp;
                }
                else {
                    current = current->next;
                }
            }
            i++;
        }
        return head;
    }
};