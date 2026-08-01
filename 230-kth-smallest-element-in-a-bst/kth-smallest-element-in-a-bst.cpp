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
    void tree(TreeNode* root, vector<int> &flat) {
        if (root == nullptr) {
            return;
        }
        tree(root->left, flat);
        flat.push_back(root->val);
        tree(root->right, flat);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> flat = {};
        tree(root, flat);
        // sort(flat.begin(), flat.end());
        return flat[k-1];
    }
};