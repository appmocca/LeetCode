class Solution {
public:
    int numWays(int n, vector<vector<int>>& relation, int k) {
        map<int, vector<int>> record ;
        for (vector<int> v : relation)  record[v[0]].emplace_back(v[1]) ;
        queue<int> q ;
        q.push(0) ;
        int ans = 0 ;

        while (k--){
            int curr = q.size ;
            while (curr--){
                int tmp = q.front() ;
                q.pop() ;

                vector<int> tmp = record[curr] ;
                for (int i = 0 ; i < tmp.size(); i++){
                    q.push(tmp[i]) ;
                }
            }
        }
        while (q.size()){
            int curr = q.front() ;
            if (curr == n - 1) ans++ ;
            q.pop() ;
        }
        return ans ;
    }
};