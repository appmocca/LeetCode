/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> allNumber ;
    void Add(TreeNode* root){
        if (!root)  return ;
        Add(root -> left) ;
        allNumber.push_back(root -> val) ;
        Add(root -> right) ;
    }

    int getMinimumDifference(TreeNode* root) {
        // allNumber.clear() ;
        Add(root) ;
        int ans = INT_MAX ;
        for (int i = 1 ; i <allNumber.size(); i++)
            ans = min(ans, allNumber[i] - allNumber[i-1]) ;
        return ans ;
    }
};