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
    ListNode* middleNode(ListNode* head) {
        int middle = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            middle++;
            temp = temp->next;
        }
        middle = (middle/2)+1;

        ListNode* current = head;
        while (true) {
            if (middle == 1) {
                // head = current;
                break;
            }
            current = current->next;
            middle--;
        }
        return current;
    }
};