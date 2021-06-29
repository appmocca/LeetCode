class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if (source == target)   return 0 ;
        unordered_map<int, vector<int>> record ;
        vector<bool> visited(routes.size(), false) ;
        for(int bus = 0; bus < routes.size(); bus ++) 
            for(int site = 0; site < routes[bus].size(); site ++) 
                record[routes[bus][site]].push_back(bus);      //Recording which bus will travel which site
        queue<int> q ;
        q.push(source) ;    //initialize the source site
        int step = 0 ;
        while (!q.empty()){
            step++ ;
            int len = q.size() ;
            for (int i = 0 ; i < len ; i++){
                int site = q.front() ;
                q.pop() ;
                for (int& r : record[site]){
                    if (!visited[r]){
                        for(int j = 0; j < routes[r].size(); j ++) {
                            if(routes[r][j] == target) return step;
                            q.push(routes[r][j]) ;
                        }
                    }
                    visited[r] = true ;
                }
            }
        }
        return -1 ;
    }
};