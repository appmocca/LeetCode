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
    void preorder(TreeNode* root, vector<int>& res){
        if (!root)  return ;
        res.push_back(root->val) ;
        preorder(root->left, res) ;
        preorder(root->right,res) ;
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> res ;
        preorder(root, res) ;
        sort(res.begin(), res.end()) ;
        for (int i = 1; i < res.size(); i++)    if (res[i] != res[0])   return res[i] ;
        return -1 ;
    }
};

class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        int ans = -1;
        int rootvalue = root->val;

        function<void(TreeNode*)> dfs = [&](TreeNode* node) {
            if (!node) {
                return;
            }
            if (ans != -1 && node->val >= ans) {
                return;
            }
            if (node->val > rootvalue) {
                ans = node->val;
            }
            dfs(node->left);
            dfs(node->right);
        };

        dfs(root);
        return ans;
    }
};