/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#define LN ListNode
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head || !head->next)   return false ;	//If the linknode has only 1 node
        LN *slow = head ;
        LN *fast = head -> next ;
        while (slow != fast){
            if (!fast || !fast->next)   return false ;	//If fast pointer finished, means no loop
            slow = slow->next ;
            fast = fast->next->next ;
        }
        return true ;	//If slow == fast, it must exist loop
    }
};