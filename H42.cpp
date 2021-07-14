class Solution {
public:
    int trap(vector<int>& height) {
        //O(n^2)
        int sum = 0, len = height.size() ;
        for (int i = 0; i < len; i++) {
            if (!i || i == len - 1) continue ;  //Don't need to process start & end
            int rheight = height[i], lheight = height[i] ;
            for (int r = i + 1; r < len; r++)   rheight = max(rheight, height[r]) ; //Finding max height on the right side
            for (int l = i - 1; l >= 0; l--)    lheight = max(lheight, height[l]) ;
            int delta = min(lheight, rheight) - height[i] ; //Calculate valumn of water
            if (delta)  sum += delta ;  //Only if has water
            // sum += min(lheight, rheight) - height[i] ; can be summarize to this format
        }
        return sum ;
    }
};