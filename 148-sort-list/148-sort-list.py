# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        if not head or not head.next: return head
        mid = self.midpoint(head)
        left = self.sortList(head)
        right = self.sortList(mid)
        
        return self.merge(left, right)
        
        
    def midpoint(self, head):
        slow, fast = head, head
            
        while fast.next and fast.next.next:
            slow = slow.next
            fast = fast.next.next
                
        mid = slow.next
        slow.next = None
            
        return mid
        
        
    def merge(self, left, right):
            
        dummy = cur = ListNode(0)
            
        while left and right:
            if left.val<right.val:
                cur.next = left
                cur = cur.next
                left = left.next
            else:
                cur.next = right
                cur = cur.next
                right = right.next
                
                
        cur.next = left or right
            
        return dummy.next
                    
            
            
            
            
            
            
            
            
            
            
            
            
        