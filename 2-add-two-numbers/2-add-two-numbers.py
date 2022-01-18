# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        
        ans = ListNode();
        temp = ans;
        
        carry = 0;
        
        while (l1 or l2 or carry):
            
            if (l1):
                val1 = l1.val;
                l1 = l1.next
            else:
                val1 = 0;
            
            if (l2):
                val2 = l2.val;
                l2 = l2.next
            else:
                val2 = 0;
                
            temp.next = ListNode((val1+val2+carry)%10)
            temp = temp.next
            
            carry = (val1+val2+carry)//10
            
        return ans.next
            
        