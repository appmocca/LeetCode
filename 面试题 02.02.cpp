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
    int kthToLast(ListNode* head, int k) {
        ListNode* cp = head ;
        int cnt = 0 ;
        while (cp){
            cnt++ ;
            cp = cp -> next ;
        }
        for (int i = 0; i < cnt - k; i++){
            head = head -> next ;
        }
        return head -> val ;
    }
};