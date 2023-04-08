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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return nullptr;
        ListNode *nodeA = headA, *nodeB = headB;
        
        while (nodeA != nodeB){
            if (!nodeA) nodeA = headB;
            else nodeA = nodeA->next;
            
            if (!nodeB) nodeB = headA;
            else nodeB = nodeB->next;
        }
        
        return nodeA;
    }
};