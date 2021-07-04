class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> record ;
        for (char c : s) record[c]++ ;
        
        vector<pair<char, int>> temp(record.begin(), record.end());//Must use vactor to sort map
        sort(temp.begin(), temp.end(), [&](const pair<char, int> & a, const pair<char, int> & b){
            return a.second > b.second;});

        string ans = "";
        for (auto &mp: temp)    while (mp.second --)    ans += mp.first;
        return ans;
    }
};