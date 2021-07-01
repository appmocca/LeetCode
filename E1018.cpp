// class Solution {
// public:
//     vector<bool> prefixesDivBy5(vector<int>& nums) {
//         int len = nums.size() ;
//         vector<bool> ans(len, 0) ;
//         string record = "" ;
//         for (int i = 0 ; i < len; i++) {
//             record += nums[i] + '0' ;
//             ans[i] = !(stoi(record,nullptr,2) % 5); //stoi/stoll will exceed the int/longlong range
//         }
//         return ans ;
//     }
// };

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> answer;
        int prefix = 0;
        int length = nums.size();
        for (int i = 0; i < length; i++) {
            prefix = ((prefix << 1) + nums[i]) % 5;
            answer.emplace_back(!prefix);
        }
        return answer;
    }
};