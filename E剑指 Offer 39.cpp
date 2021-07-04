class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size() ;
        unordered_map<int,int> record ;
        for (int num : nums)    record[num]++ ;
        for (int num : nums)    if (record[num] > len/2)    return num ;
        return -1 ;
    }
};

//Boyer-Moore Algo
//Make majority value is 1 and others are -1 so the sum of value must grester than 0, so majority existed
//If not, there's no majority
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate = -1 ;
        for (int num : nums){
            if (num == candidate)   count++ ;   //Self adding when the number is majority
            else if (--count < 0){              //Count should make self substracting if the number is not majority
                candidate = num ;               //If Count less than 0, so candidate is not the mojority
                count = 1 ;                     //Making current number is candidate and reset count to 1 since current number is candidate and should be counted
            }
        }    
        return candidate ;
    }
};