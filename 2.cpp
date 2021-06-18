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
        ListNode *ans = nullptr, *head = nullptr ;
        int carry = 0 ;
        int sum   = 0 ;
        while (l1 || l2){
            int a = l1 ? l1 -> val : 0 ;    //If next node of l1 is nullptr, a = 0
            int b = l2 ? l2 -> val : 0 ;    //If next node of l2 is nullptr, b = 0
            sum = a + b + carry ;
            if (!head)  //Fillout the return ListNode
                head = ans = new ListNode(sum % 10) ;   //Initialize the first value
            else{
                ans -> next = new ListNode(sum % 10) ;
                ans = ans -> next ;
            }
            if (l1)
                l1 = l1 -> next ;
            if (l2)
                l2 = l2 -> next ;
            carry = sum / 10 ;  //Calculate the carry
        }
        if (carry)
            ans -> next = new ListNode(carry) ; //If has a carry should be added at the end
        return head ;
    }
};