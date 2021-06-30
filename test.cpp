class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> record(wordList.begin(), wordList.end()) ;
        if (!record.count(endWord))     return 0 ;
        unordered_set<string> beginSet, endSet, tmp, visited ;
        beginSet.insert(beginWord) ;
        endSet.insert(endWord) ;
        int step = 1 ;
        string tmp ;

        while (!beginSet.size() && !endSet.size()) {
            if (beginSet.size() < endSet.size()){
                tmp      = endSet ;
                beginSet = endSet ;
                endSet   = tmp ;
            }
            for (string word : wordList){
                for (int i = 0; i <beginSet.size(); i++){
                    char old = word[i];
                    for (char c = 'a'; c < 'z'; c++){
                        if (old == c)   continue ;
                        word[i] = c ;
                        if (record.count(word)) return step + 1 ;
                        else if (record.count(word) && !visited.count(word)){
                            tmp.insert(word) ;
                            visited.insert(word) ;
                        }
                    }
                    word[i] = old ;
                }
            }
            beginSet = tmp ;
            step++ ;
        }
        return 0 ;
    }
};