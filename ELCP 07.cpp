class Solution {
public:
    int numWays(int n, vector<vector<int>>& relation, int k) {
        //BFS
        map<int, vector<int>> record ;
        for (vector<int> v : relation)  record[v[0]].emplace_back(v[1]) ;
        queue<int> q ;
        q.push(0) ;
        int ans = 0 ;

        while (k--){
            int size = q.size() ;
            while (size--){
                int curr = q.front() ;
                q.pop() ;

                vector<int> temp = record[curr] ;
                for (int i = 0 ; i < temp.size(); i++){
                    q.push(temp[i]) ;
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