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
    int find_gcd(int a, int b) {
        int minimum = (a < b)?a : b;
        while (minimum != 1) {
            if (a%minimum == 0 && b%minimum == 0) {
                return minimum;
            }
            else {
                minimum--;
            }
        }
        return 1;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {      
        int count = 0;
        ListNode* current = head;
        while (current->next != nullptr) {
            int gcd = find_gcd(current->val, current->next->val);
            ListNode* newNode = new ListNode(gcd);
            newNode->next = current->next;
            current->next = newNode;
            current = newNode->next;
        }
        return head;
    }
};