class Solution {
public:
    //Initialize states to determine inpu string state
    //Deterministic Finite Automaton as known as DFA
    // State_Initial           -> Char_Point  -> State_Point_Without_Int
    //                         -> Char_Sign   -> State_Sign
    //                         -> Char_Number -> State_Int
    // State_Sign              -> Char_Point  -> State_Point_Without_Int
    //                         -> Char_Number -> State_Int
    // State_Int               -> Char_Number -> State_Int
    //                         -> Char_Point  -> State_Fraction
    //                         -> Char_Exp    -> State_Exp
    // State_Point             -> Char_Number -> State_Fraction
    //                         -> Char_Exp    -> State_Exp
    // State_Point_Without_Int -> Char_Number -> State_Fraction
    // State_Fraction          -> Char_Number -> State_Fraction
    //                         -> Char_Exp    -> State_Exp
    // State_Exp               -> Char_Sign   -> State_Exp_Sign
    //                         -> Char_Number -> State_Exp_Num
    // State_Exp_Sign          -> Char_Number -> State_Exp_Num
    // State_Exp_Num           -> Char_Number -> State_Exp_Num
    
    enum State{ 
        State_Initial,
        State_Sign,
        State_Int,
        State_Point,
        State_Point_Without_Int,
        State_Fraction,
        State_Exp,
        State_Exp_Sign,
        State_Exp_Num,
        State_End
    };

    //Determine the type of chartype, 
    //There are only 4 types: a point, a number, a sign or an exp sign
    //Other than those 4 types are the illegal chartype
    enum Chartype{  
        Char_Number,
        Char_Point,
        Char_Exp,
        Char_Sign,
        Char_Illegal
    };

    //Determine the chartype and return state
    Chartype toCharType(char ch){
        if (ch >= '0' && ch <= '9')      return Char_Number ;
        else if (ch == '.')              return Char_Point ;
        else if (ch == 'e' || ch == 'E') return Char_Exp ;
        else if (ch == '+' || ch == '-') return Char_Sign ;
        else                             return Char_Illegal ;
    }

    bool isNumber(string s) {
        //Initialize the unordered_map which only has one purpose: to determine
        //Logic flow explained at the beginning
        unordered_map<State, unordered_map<Chartype, State>> transfer{
            {
                State_Initial, {
                    {Char_Number, State_Int},
                    {Char_Point, State_Point_Without_Int},
                    {Char_Sign, State_Sign}
                }
            },
            {
                State_Sign, {
                    {Char_Point, State_Point_Without_Int},
                    {Char_Number, State_Int}
                }
            },
            {
                State_Int, {
                    {Char_Number, State_Int},
                    {Char_Exp, State_Exp},
                    {Char_Point, State_Point}
                }
            },
            {
                State_Point, {
                    {Char_Exp, State_Exp},
                    {Char_Number, State_Fraction}
                }
            },
            {
                State_Point_Without_Int, {
                    {Char_Number, State_Fraction}
                }
            },
            {
                State_Fraction, {
                    {Char_Number, State_Fraction},
                    {Char_Exp, State_Exp}
                }
            },
            {
                State_Exp, {
                    {Char_Sign, State_Exp_Sign},
                    {Char_Number, State_Exp_Num}
                }
            },
            {
                State_Exp_Sign, {
                    {Char_Number, State_Exp_Num}
                }
            },
            {
                State_Exp_Num, {
                    {Char_Number, State_Exp_Num}
                }
            }
        };

        int len = s.size() ;
        State state = State_Initial ;

        for (size_t i = 0; i < len; i++){
            Chartype type = toCharType(s[i]) ;
            //If cannout find any state to match a chartype, return false
            if (transfer[state].find(type) == transfer[state].end())    return false ;
            else    state = transfer[state][type] ;
        }

        //Only these state are vaild and can be returned as true
        return state == State_Int || state == State_Point || state == State_Fraction || state == State_Exp_Num || state == State_End ;
    }
};