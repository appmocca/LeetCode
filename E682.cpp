class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> scores ; 
        for (string s : ops){
            if      (s == "C")  scores.pop() ;
            else if (s == "D")  scores.push(2 * scores.top()) ;
            else if (s == "+"){
                int top = scores.top() ;
                scores.pop() ;
                int newtop = scores.top() + top ;
                scores.push(top) ; scores.push(newtop) ;
            }
            else    scores.push(stoi(s)) ;
        }
        int sum = 0 ;
        while (scores.size()){
            sum += scores.top() ;
            scores.pop() ;
        }
        return sum ;   
    }
};