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
    int maxLeftDepth = INT_MIN ;
    int maxLeftValue ;
    void traversal(TreeNode* root, int leftLen){
        if (!root->left && !root->right)    if (leftLen > maxLeftDepth){
            maxLeftDepth = leftLen ;
            maxLeftValue = root->val ; 
            return ;
        } 

        if (root->left)     traversal(root->left,  (++leftLen)--) ;
        if (root->right)    traversal(root->right, (++leftLen)--) ;
        return ;
    }
public:
    int findBottomLeftValue(TreeNode* root) {
        traversal(root, 0) ;
        return maxLeftValue ;
    }
};