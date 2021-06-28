class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> record(wordList.begin(), wordList.end()) ;
        if (!record.count(endWord))     return 0 ;  //If the endword not listed in the wordList, just return 0

        queue<pair<string,int>> q ;
        q.push({beginWord, 1}) ;                    //Initialize the queue

        int step ;
        string tmp ;

        while (!q.empty()){
            step = q.front().second ;
            tmp  = q.front().first  ;
            if (tmp == endWord)     return step ;
            q.pop() ;

            char ch ;
            for (int i = 0; i < tmp.size(); i++){           //Changing a char each time
                ch = tmp[i]; 
                for (char c = 'a'; c <= 'z'; c++){
                    if (ch == c)    continue ;              //Skip
                    tmp[i] = c ;
                    if (record.find(tmp) != record.end()){  //If can be found in the wordList
                        q.push({tmp, step + 1}) ;           //Adding step cost
                        record.erase(tmp) ;                 //Removing current word in the wordList 
                    } 
                    tmp[i] = ch ;
                }
            }
        }
        return 0 ;
    }
};

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> record(wordList.begin(), wordList.end()) ;
        if (record.find(endWord) == record.end())     return 0 ;  //If the endword not listed in the wordList, just return 0

        unordered_set<string> beginSet, endSet, tmp, visited ;
        beginSet.insert(beginWord) ;
        endSet.insert(endWord) ;
        int len = 1 ;

        while (!beginSet.empty() && !endSet.empty()){           //Make sure the algorithm using the shortest set
            if (beginSet.size() > endSet.size()){
                tmp = beginSet ;
                beginSet = endSet ;
                endSet = tmp ;
            }
            tmp.clear() ;
            for (string word : beginSet){
                for (int i = 0; i <word.size(); i++){
                    char old = word[i] ;
                    for (char c = 'a'; c <= 'z'; c++){
                        if (old == c)       continue ;
                        word[i] = c ;
                        if (endSet.count(word)) return len + 1 ;            //If found the endWord
                        if (record.count(word) && !visited.count(word)){    //If the word in the dictionary but not visited
                            tmp.insert(word) ;
                            visited.insert(word) ;
                        }
                    }
                    word[i] = old ;
                }
            }
            beginSet = tmp ;
            len++ ;
        }
        return 0 ;
    }
};