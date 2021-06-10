class Solution {
public:
    void process(vector<vector<int>>& res, vector<int>& input, int first, int len){
        if (first == len)   //set return point
            res.emplace_back(input) ;
        
        for (size_t i = first; i < len; i++){
            swap(input[i], input[first]) ;  //when i increasing, swap the number followed by first pivot 
            process(res, input, first + 1, len) ;   //recursingly call this function until first reaches len
            swap(input[i], input[first]) ;  //swap back the position and prepare to emplace_back
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res ;
        process(res, nums, 0, nums.size()) ;
        return res ;
    }
};