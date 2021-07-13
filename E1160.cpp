class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> letters(26,0), tmp ;
        int count = 0;
        for(char c : chars) letters[c-'a']++;
        for(auto s : words)
        {
            tmp = letters;
            int i = 0, len = s.size() ;
            while(i < len)
            {
                if(tmp[s[i]-'a'] == 0) break;
                tmp[s[i++]-'a']--;
            }
            if(i==len) count += i;
        }
        return count;

    }
};

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> chars_cnt;
        for (char c : chars) {
            ++chars_cnt[c];
        }
        int ans = 0;
        for (string word : words) {
            unordered_map<char, int> word_cnt;
            int len = word.size() ;
            for (char c : word) {
                ++word_cnt[c];
            }
            bool is_ans = true;
            for (char c : word) {
                if (chars_cnt[c] < word_cnt[c]) {
                    is_ans = false;
                    break;
                }
            }
            if (is_ans) {
                ans += len;
            }
        }
        return ans;
    }
};