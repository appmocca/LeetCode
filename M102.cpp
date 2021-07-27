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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q ;
        vector<vector<int>> res ;
        if (root)   q.push(root) ;
        while (q.size()){
            int size = q.size() ;
            vector<int> v ;
            for (int i = 0; i < size; i++){
                TreeNode* curr = q.front() ;
                q.pop() ;
                v.push_back(curr->val) ;
                if (curr->left)     q.push(curr->left) ;
                if (curr->right)    q.push(curr->right); 
            }
            res.push_back(v) ;
        }
        return res ;
    }
};