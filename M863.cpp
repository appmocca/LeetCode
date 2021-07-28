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
public:
    vector<int> ans ;
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        dfs(root, target, k) ;
        return ans ;
    }
    
    int dfs(TreeNode* root, TreeNode* target, int k){
        if (!root)  return -1 ;
        if (root == target){
            find(root, k, true, true) ;
            return 0 ;
        }
        
        int leftDis = dfs(root->left, target, k) ;
        int rightDis= dfs(root->right,target, k) ;
        if (leftDis != -1){
            find(root, k - leftDis - 1, false, true) ;
            return leftDis + 1 ;
        }
        if (rightDis!= -1){
            find(root, k - rightDis- 1, true, false) ;
            return rightDis+ 1;
        }
        return -1 ;
    }

    void find(TreeNode* root, int dis, bool searchLeft, bool searchRight){
        if (!root || dis < 0)   return ;
        if (!dis)               return ans.push_back(root->val) ;
        if (searchLeft)         find(root->left, dis-1, true, true) ;
        if (searchRight)        find(root->right,dis-1, true, true) ;
    }
};