class Solution {
public:
    vector<int> getRow(int rowIndex) {
	    //The sum of a line can be represented as sum(i-1) * (rowIndex - i - 1) / i
        vector<int> row(rowIndex + 1);
        row[0] = 1;
        for (int i = 1; i <= rowIndex; ++i) {
            row[i] = 1LL * row[i - 1] * (rowIndex - i + 1) / i;	//Converting the sum to long long type to avoid exceed the int limit
        }
        return row;
    }
};