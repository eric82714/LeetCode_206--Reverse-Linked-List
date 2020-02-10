/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* reverse(NULL);
        
        while(head) {
            ListNode* remain = head->next;
            head->next = reverse;
            reverse = head;
            head = remain;
        }
        return reverse;
    }
};
