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
    vector<int> rec ;
    void traversal(TreeNode* root){
        if (!root)  return ;
        traversal(root->left) ;
        rec.push_back(root->val) ;
        traversal(root->right) ;
    }
public:
    bool findTarget(TreeNode* root, int k) {
        rec.clear() ;
        traversal(root) ;
        int lo = 0, hi = rec.size() - 1 ;
        while (lo < hi){
            int sum = rec[lo] + rec[hi] ;
            if (sum == k)   return true ;
            if (sum < k)    lo++ ;
            else            hi-- ;
        }
        return false ;
    }
};
