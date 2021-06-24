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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ans = nullptr ;
        while (l1 || l2){
            if (l1 -> val >= l2 ->val){
                ans = new ListNode(l2 -> val) ;
                l2 = l2 -> next ;
                ans = ans -> next ;
            }  
            else {
                ans = new ListNode(l1 -> val) ;
                l1 = l1 -> next ;
                ans = ans -> next ;
            }
        }
        return ans ;
    }
};