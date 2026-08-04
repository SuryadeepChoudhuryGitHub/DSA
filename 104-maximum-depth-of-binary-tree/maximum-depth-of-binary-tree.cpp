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
    void findDepth(TreeNode* root, vector<int> &depth, int d) {
        if (root == nullptr) {
            depth.push_back(d);
            return;
        }
        d++;
        findDepth(root->left, depth, d);
        findDepth(root->right, depth, d);
    }

    int maxDepth(TreeNode* root) {
        vector<int> depths = {};
        findDepth(root, depths, 0);
        sort(depths.begin(), depths.end());
        return depths[depths.size()-1];    
    }
};