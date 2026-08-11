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
    ListNode* reverseList(ListNode* head) {
        ListNode* Prev = NULL;
        ListNode* current = head;
        ListNode* Next = NULL;
        
        while (current != NULL) {
            Next = current->next;
            current->next = Prev;
            Prev = current;
            current = Next;
        }
        head = Prev;
        return head;
    }
};