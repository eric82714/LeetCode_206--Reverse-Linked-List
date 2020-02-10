# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        reverse = None
        
        while head:
            next = head.next
            head.next = reverse
            reverse = head
            head = next
            
        return reverse
