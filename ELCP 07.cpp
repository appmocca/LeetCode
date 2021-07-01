class Solution {
public:
    int numWays(int n, vector<vector<int>>& relation, int k) {
        int size = relation.size();
        map<int, vector<int>> record;

        for(int i = 0; i < size; ++i){
            record[relation[i][0]].emplace_back(relation[i][1]);
        }

        int ans = 0;
        queue<int> que;
        que.push(0);

        while(k--){
            int temp = que.size();
            while (temp--){
                auto curr = que.front();
                que.pop();

                int s = record[curr].size();
                for(int i = 0; i < s; ++i){
                    que.push(record[curr][i]);
                }
            }
        }

        while(!que.empty()){
            auto curr = que.front();
            if (curr == n - 1) ans ++;
            que.pop();
        }

        return ans;
    }
};