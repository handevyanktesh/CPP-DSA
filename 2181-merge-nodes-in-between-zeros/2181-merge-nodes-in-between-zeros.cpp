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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* prev = head->next; 
        ListNode* temp = prev;

        while (temp != nullptr) {
            int sum = 0;
              
            while (temp->val != 0) {
                sum += temp->val;
                temp = temp->next;
            }

            prev->val = sum;
            temp = temp->next;
            prev->next = temp;
            prev = prev->next;
        }
        return head->next; 
    }
};