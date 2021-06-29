class Solution 
{
public:
    vector<int> peopleIndexes(vector<vector<string>>& favoriteCompanies) 
    {
        int n = favoriteCompanies.size();
        for (auto & subset: favoriteCompanies)
            sort(subset.begin(), subset.end());       //Sorting for includes function

        vector<int> res;
        for (int i = 0; i < n; i ++)
        {
            bool flag = true;
            for (int j = 0; j < n; j ++)
                if (i != j && favoriteCompanies[i].size() <= favoriteCompanies[j].size())
                    if (includes(favoriteCompanies[j].begin(), favoriteCompanies[j].end(), favoriteCompanies[i].begin(), favoriteCompanies[i].end())){
                        flag = false;
                        break;
                    }
            if (flag == true)
                res.push_back(i);
        }
        return res;
    }
};