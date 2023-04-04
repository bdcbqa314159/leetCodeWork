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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode(0), *temp = ans;
        
        int carry = 0;
        
        while (l1 || l2 || carry){
            int val1{}, val2{};
            
            if (l1){
                val1 = l1->val;
                l1 = l1->next;
            }
            
            if (l2){
                val2 = l2->val;
                l2 = l2->next;
            }
            
            int sum = val1+val2+carry;
            
            temp->next = new ListNode(sum%10);
            temp = temp->next;
            
            carry = sum/10;
        }
        return ans->next;
    }
};