/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// class Solution:
//     def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        
//         if not headA or not headB:
//             return None
        
//         a,b = headA, headB
        
//         while a!=b:
            
//             if not a:
//                 a = headB
//             else:
//                 a = a.next
            
//             if not b:
//                 b = headA
//             else:
//                 b = b.next
        
//         return a
        


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return 0;
        
        ListNode *a = headA, *b = headB;
        
        while (a!=b){
            if (!a)
                a = headB;
            else
                a = a->next;
            
            if (!b)
                b = headA;
            else
                b = b->next;
        }
        return a;
    }
};