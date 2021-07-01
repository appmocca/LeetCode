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
    vector<int> record ;
private:
    void recordNum(TreeNode* root){
        if (!root)  return ;
        recordNum(root->left) ;
        record.push_back(root->val) ;
        recordNum(root->right) ;
    }

public:
    int minDiffInBST(TreeNode* root) {
        recordNum(root) ;
        int ans = INT_MAX ;
        for (int i = 1; i < record.size(); i++)
            ans = min(ans, record[i] - record[i-1]) ;
        return ans ;
    }
};