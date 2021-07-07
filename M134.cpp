class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        //In this case, it will be 3 situations
        //1.If sum of feul less than sum of cost, will be no answer
        //2.If from index 0, the gas - cost always greater than 0, 0 is start point
        //3.If not, adding gas-cost from end to start until the sum cost be positive
        int currSum = 0, mincost = INT_MAX ;
        for (int i = 0; i < gas.size(); i++){
            int restFeul = gas[i] - cost[i] ;
            currSum += restFeul ;
            if (currSum < mincost)  mincost = currSum ;  
        }
        if (currSum <  0)    return -1 ;            //Case1
        if (mincost >= 0)    return 0  ;            //Case2
        for (int i = gas.size() - 1; i >= 0; i--){  //Case3
            int restFeul = gas[i] - cost[i] ;
            mincost += restFeul ;
            if (mincost >= 0)   return i ;
        }
        return -1 ;
    }
};

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int currSum = 0, totalSum = 0, startPoint = 0 ;
        for (int i = 0; i < gas.size(); i++){
            currSum += gas[i] - cost[i] ;
            totalSum+= gas[i] - cost[i] ;
            if (currSum < 0){
                startPoint = i + 1 ;
                currSum    = 0 ;
            }
        }
        if (totalSum < 0)   return -1 ; //If the sum of feul less than cost, will be no answer
        return startPoint ;
    }
};