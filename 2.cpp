class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res = nullptr, *ans = nullptr ;
        int carry = 0 ;
        while (l1 || l2){
            int a = l1 ? l1 -> val : 0 ;
            int b = l2 ? l2 -> val : 0 ;
            int sum = a + b + carry ;
            if (!res)
                res = ans = new ListNode(sum % 10) ; //Copy the listnode for output
            else{
                ans -> next = new ListNode(sum % 10) ;  //When res is not nullptr
                ans = ans -> next ;
            }
            if (l1) //Pushing to next listnode
                l1 = l1 -> next ;
            if (l2)
                l2 = l2 -> next ;
            carry = sum / 10 ;
        }
        if (carry)  //If carry > 0
            ans -> next = new ListNode(carry) ;
        return res ;
    }
};