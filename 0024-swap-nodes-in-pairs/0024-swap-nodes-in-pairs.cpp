/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        if (!head || !head->next) return head;
        
        ListNode* first = head;
        ListNode* second = head->next;
        ListNode* prev = nullptr;
        head = second;
        
        
        while(first&&second){
            ListNode* temp = second->next;
            first->next = temp;
            second->next = first;
            
            if (prev)
                prev->next = second;
            
            prev = first;
            first = temp;
            if (first)
                second = first->next;
            
            else
                second = nullptr;
        }
        
        return head;
        
    }
};

// class Solution {
//     public ListNode swapPairs(ListNode head) {
        
//         ListNode temp = new ListNode(0);
//         temp.next = head;
//         ListNode current = temp;
        
//         while (current.next != null && current.next.next != null){
            
//             ListNode first_node = current.next;
//             ListNode second_node = current.next.next;
//             first_node.next = second_node.next;
//             current.next = second_node;
//             current.next.next = first_node;
//             current = current.next.next;
//         }
        
//         return temp.next;
        
//     }
// }