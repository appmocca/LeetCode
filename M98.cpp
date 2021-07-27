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
private:
    vector<int> record ;
    void traversal(TreeNode* root){
        if (!root)  return ;
        traversal(root->left) ;
        record.push_back(root->val) ;
        traversal(root->right) ;
    }
public:
    bool isValidBST(TreeNode* root) {
        record.clear() ;
        traversal(root) ;
        for (int i = 1; i < record.size(); i++) if (record[i-1] >= record[i])    return false ;
        return true ;
    }
};