
class TimeMap {
private:
    unordered_map<string, vector<pair<int, string>>> key2val;
public:
    // /** Initialize your data structure here. */
    TimeMap() {

    }
    
    void set(string key, string value, int timestamp) {
        key2val[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if (key2val.find(key) != key2val.end())
        {
            auto& vals = key2val[key];
            pair<int, string> p = {timestamp, string({127})};
            auto iter = upper_bound(vals.begin(), vals.end(), p);
            if (iter != vals.begin())
            {
                return (iter-1)->second;
            }
        }
        return "";
    }
};

// /**
//  * Your TimeMap object will be instantiated and called as such:
//  * TimeMap* obj = new TimeMap();
//  * obj->set(key,value,timestamp);
//  * string param_2 = obj->get(key,timestamp);
//  */
