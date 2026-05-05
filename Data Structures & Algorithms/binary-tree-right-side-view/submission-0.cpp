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
    void traverse(TreeNode* root, vector<int>& ans, int height) {
        if(!root) return;
        if(height > ans.size()){
            ans.push_back(root->val);
        }
        traverse(root->right, ans, height + 1);
        traverse(root->left, ans, height + 1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        int height = 1;
        traverse(root, ans, height);
        return ans;
    }
};
