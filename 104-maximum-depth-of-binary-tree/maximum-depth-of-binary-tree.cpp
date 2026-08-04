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
    int maximum = 0;
    void findDepth(TreeNode* root, int d) {
        if (root == nullptr) {
            if (d > maximum) {
                maximum = d;
            }
            return;
        }
        d++;
        findDepth(root->left, d);
        findDepth(root->right, d);
    }

    int maxDepth(TreeNode* root) {
        findDepth(root, 0);
        return maximum;    
    }
};