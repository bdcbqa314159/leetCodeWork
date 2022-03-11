# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        
        if not head or not head.next: return head
        
        cur = head
        N = 1
        
        while cur.next:
            N += 1
            cur = cur.next
            
        cur.next = head
        
        M = N-k%N
        
        i = 0
        
        cur = head
        
        while i < M:
            prev = cur
            cur = cur.next
            
            i += 1
            
        prev.next = None
        head = cur
        
        return head
        
        
        