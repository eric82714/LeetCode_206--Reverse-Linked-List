/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* reverse = NULL;
        
    while(head != NULL) {
        struct ListNode* remain = head->next;
        head->next = reverse;
        reverse = head;
        head = remain;
    }
    return reverse;
}
