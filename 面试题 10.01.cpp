class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int total = A.size() - 1 ;
        int ai = m - 1 ;
        int bi = n - 1 ;
        while (bi >= 0) //Stops when done processing B
            if (ai < 0) //When done processing A
                A[total--] = B[bi--] ;
            else if (A[ai] > B[bi]) //If A greater than B
                A[total--] = A[ai--] ;
            else    //If B greater than A
                A[total--] = B[bi--] ;
    }
};