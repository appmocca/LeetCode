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


class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() <= 2) return 0; // 可以不加
        stack<int> st; // 存着下标，计算的时候用下标对应的柱子高度
        st.push(0);
        int sum = 0;
        for (int i = 1; i < height.size(); i++) {
            if (height[i] < height[st.top()]) {     // 情况一
                st.push(i);
            } if (height[i] == height[st.top()]) {  // 情况二
                st.pop(); // 其实这一句可以不加，效果是一样的，但处理相同的情况的思路却变了。
                st.push(i);
            } else {                                // 情况三
                while (!st.empty() && height[i] > height[st.top()]) { // 注意这里是while
                    int mid = st.top();
                    st.pop();
                    if (!st.empty()) {
                        int h = min(height[st.top()], height[i]) - height[mid];
                        int w = i - st.top() - 1; // 注意减一，只求中间宽度
                        sum += h * w;
                    }
                }
                st.push(i);
            }
        }
        return sum;
    }
};