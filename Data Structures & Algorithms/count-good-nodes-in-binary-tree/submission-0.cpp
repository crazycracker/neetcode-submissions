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
    void traverse(TreeNode* root, int higher, int& cnt) {
        if(!root) return;
        //cout<<root->val<<" "<<higher<<" "<<cnt<<endl;
        if(root and root->val >= higher) {
            higher = root->val;
            cnt++;
        }
        traverse(root->left, higher, cnt);
        traverse(root->right, higher, cnt);
    }
    int goodNodes(TreeNode* root) {
        unordered_set<int> sett;
        int cnt = 0;
        traverse(root, INT_MIN, cnt);
        return cnt;
    }
};
