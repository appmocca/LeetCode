/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
private: 
    TreeNode* traversal(TreeNode* curr, TreeNode* p, TreeNode* q){
        if (!curr)  return curr ;
        int currval = curr->val, pval = p->val, qval = q->val ;
        if (currval > pval && currval > qval){
            TreeNode* left  = traversal(curr->left, p, q)  ;
            if (left)  return left ;
        }
        if (currval < pval && currval < qval){
            TreeNode* right = traversal(curr->right, p, q) ;
            if (right) return right ;
        }
        return curr ;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return traversal(root, p, q) ;
    }
};