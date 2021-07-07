class Solution {
public:
    static bool cmp(const vector<int> a, const vector<int> b){
        if (a[0] == b[0])   return a[1] < b[1] ;    //If a & b have the same height, return less value in index 1
        return a[0] > b[0] ;                        //Sorting from highest to shortest
    }

    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), cmp) ;
        vector<vector<int>> ans ;
        for (int i = 0; i < people.size(); i++){
            int position = people[i][1] ;
            ans.insert(ans.begin() + position, people[i]) ; //Making insertion based on index position
        }
        return ans ;
    }
};

class Solution {
public:
    static bool cmp(const vector<int> a, const vector<int> b){
        if (a[0] == b[0])   return a[1] < b[1] ;
        return a[0] > b[0] ;
    }

    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        //Using list to shorten the time comsuming
        sort(people.begin(), people.end(), cmp) ;
        list<vector<int>> ans ;
        for (int i = 0; i < people.size(); i++){
            int position = people[i][1] ;
            std::list<vector<int>>::iterator it = ans.begin() ;
            while (position--)  it++ ;
            ans.insert(it,people[i]) ;
        }
        return vector<vector<int>> (ans.begin(), ans.end()) ;
    }
};