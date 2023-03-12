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
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if (!list1) return list2;
        if (!list2) return list1;
        
         ListNode* newHead = NULL;
        
        if (list1->val < list2->val){
            newHead = list1;
            newHead->next = mergeTwoLists(list1->next, list2);
        }
        
        else{
            newHead = list2;
            newHead->next = mergeTwoLists(list2->next, list1);
        }
        
        return newHead;
        
    }
    
    
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        
        if (n == 0) return 0;
        
        int i = 0;
        int last = n-1;
        int j = last;
        
        while (last != 0){
            i = 0;
            j = last;
            
            while (i<j){
                lists[i] = mergeTwoLists(lists[i], lists[j]);
                i++;
                j--;
                last = j;
            }
        }
        return lists[0];
    }
};




