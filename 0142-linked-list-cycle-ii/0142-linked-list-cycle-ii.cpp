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
    ListNode *detectCycle(ListNode *head) {
        
        if (!head) return NULL;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow) break;
        }
        
        if ((!fast->next)||(!fast->next->next)) return NULL;
        
        ListNode* slow2 = head;
        while (slow2->next){
            if (slow == slow2) return slow;
            slow = slow->next;
            slow2 = slow2->next;
        }
        
        
        return NULL;
    }
};

// class Solution:
//     def detectCycle(self, head: ListNode) -> ListNode:
        
//         if not head: return None
        
//         slow, fast = head, head
//         while fast.next and fast.next.next:
//             slow = slow.next
//             fast = fast.next.next
//             if fast == slow: break
        
//         if not fast.next or not fast.next.next: return
        
//         slow2 = head
        
//         while slow.next:
//             if slow == slow2: return slow
//             slow = slow.next
//             slow2 = slow2.next
            
//         return