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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode *temp = head ;
        int cnt = 0 ;
        while (temp){
            cnt++ ;
            temp = temp -> next ;
        }
        for (size_t i = 0; i < cnt - k; i++)
            head = head -> next ;
        return head ;
    }
};