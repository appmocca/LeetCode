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
    vector<vector<int>> ans ;
    vector<int> path ;
    void traversal(TreeNode* curr, int count){
        if (!curr->left && !curr->right && !count)  return ans.push_back(path) ;
        if (!curr->left && !curr->right)            return ;
        if (curr->left){
            int temp = curr->left->val ;
            path.push_back(curr->left->val) ;
            count -= temp ;
            traversal(curr->left, count) ;  //If found the route push+back the result
            count += temp ;                 //If not, convert value back to original state
            path.pop_back() ;
        }
        if (curr->right){
            int temp = curr->right->val ;
            path.push_back(curr->right->val) ;
            count -= temp ;
            traversal(curr->right, count) ;
            count += temp ;
            path.pop_back() ;
        }
        return ;
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        ans.clear() ; path.clear() ;
        if (!root)  return ans ;
        path.push_back(root->val) ;
        traversal(root, targetSum-root->val) ;
        return ans ;
    }
};