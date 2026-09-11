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
    int absoluteSum = 0;

    void tree(TreeNode* node, string sum) {
        if (node == nullptr) {
            return;
        }

        sum.append(to_string(node->val));
        if (node->left == nullptr && node->right == nullptr) {
            absoluteSum += stoi(sum);
            return;
        }

        tree(node->left, sum);
        tree(node->right, sum);
    }

    int sumNumbers(TreeNode* root) {
        absoluteSum = 0;
        tree(root, "");
        return absoluteSum;
    }
};