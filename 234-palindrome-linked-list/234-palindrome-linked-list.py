# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: ListNode) -> bool:
        
        def reversed(head):
            node = None
        
            while head:
                next_ = head.next
                head.next = node
                node = head
                head = next_
        
            return node
        
        
        slow = head
        fast = head
        
        while fast and fast.next:
            fast = fast.next.next
            slow = slow.next
        
        slow = reversed(slow)
        fast = head
        
        while slow:
            if slow.val != fast.val:
                return False
            slow = slow.next
            fast = fast.next
            
        return True
            
        
        