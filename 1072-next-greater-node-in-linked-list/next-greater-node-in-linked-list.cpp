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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> output = {};
        ListNode* current = head;
        while (current != NULL) {
            ListNode* temp = current;
            while(temp != NULL) {
                if (temp->val > current->val) {
                    output.push_back(temp->val);
                    break;
                }
                temp = temp->next;
            }
            if(temp == NULL) {
                output.push_back(0);
            }
            current = current->next;
        }
        return output;
        
    }
};