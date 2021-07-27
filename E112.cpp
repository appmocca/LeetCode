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
    bool traversal(TreeNode* curr, int count){
        if (!curr->left && !curr->right && !count)  return true  ;
        if (!curr->left && !curr->right)            return false ;
        if(curr->left){
            count -= curr->left->val ;
            if (traversal(curr->left, count)) return true ;
            count += curr->left->val ;
        }
        if (curr->right){
            count -= curr->right->val ;
            if (traversal(curr->right, count))  return true ;
            count += curr->right->val ;
        }
        return false ;
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root)  return root ;
        return traversal(root, targetSum-root->val) ;
    }
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root)  return false ;
        if (!root->left && !root->right && targetSum == root->val)  return true ;
        return hasPathSum(root->left,targetSum - root->val) || hasPathSum(root->right,targetSum - root->val) ;
    }
};