// 很巧妙的做法，利用了 muliset 这一数据结构自动排序的特性。

// multiset中的元素是 pair，对pair排序默认的方式是，先比较 first，哪个小则排在前；first 相等则 second小的排在前。 而 first 这里表示横坐标，second 为负时，表示建筑的左侧在这一位置，其绝对值表示建筑在的高度；second 为正时，表示建筑的右侧在这一位置。

// 所以对muliset遍历时，首先会取出横坐标小的点。如果2个点横坐标相等，会先取出 second 小的点，对于负数来说，其实就是高度更高的建筑。也就是说，两个点上有高度不同的建筑，会先取高的出来放入高度集合，集合中高度最大值和之前高度不同，就直接放入结果。后面更低高度的建筑加入并不会改变最大高度。

// 如果second为正，表示建筑物在此处结束，需要把相应高度从高度集合中删除。有相同建筑同时在此结束，则会先让较低的建筑离开，因为它们不会改变最大高度。只有当最高的建筑物离开时，才进行改变。

// 如果一个位置既有建筑物进来，又有建筑物离开，会先选择进来的，同理。 总结起来，我就是想说，这里把建筑物起始点的高度设为负数，真的很巧妙。

class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        multiset<pair<int, int>> all ;
        vector<vector<int>> res ;
        
        for (auto& e : buildings) {
            all.insert(make_pair(e[0], -e[2])) ;
            all.insert(make_pair(e[1], e[2])) ;
        }
        
        multiset<int> heights({0}) ;
        vector<int> last = {0, 0} ;
        for (auto& p : all) {
            if (p.second < 0) heights.insert(-p.second) ;
            else heights.erase(heights.find(p.second)) ;
            
            auto maxHeight = *heights.rbegin() ;
            
            if (last[1] != maxHeight) {
                last[0] = p.first ;
                last[1] = maxHeight ;
                res.push_back(last) ;
            }
        }
        
        return res;
    }
};