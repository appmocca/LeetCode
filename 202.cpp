class Solution {
public:
    int sqSum(int n){   //Get the number by the sum of the squares of its digits
        int sqSum = 0 ;
        while (n){
            sqSum += pow(n % 10, 2) ;   //Adding the square of each digit
            n /= 10 ;
        }
        return sqSum ;
    }

    bool isHappy(int n) {
        int fast = sqSum(sqSum(n)), slow = sqSum(n) ;   //fast pointer goes double distance
        if (fast == 1 || slow == 1) return true ;   //check if the number reachs 1
        
        while (fast != slow){
            fast = sqSum(sqSum(fast)) ;
            slow = sqSum(slow) ;
            if (fast == 1 || slow == 1) return true ;
        }
        return false ;
    }
};