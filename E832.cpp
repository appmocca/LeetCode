class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto& x : image){
            reverse(x.begin(), x.end()) ;
            for (int i = 0; i < x.size(); i++)  x[i] = !x[i] ;
        } 
        return image ;
    }
};