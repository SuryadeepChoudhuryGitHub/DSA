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
    vector<vector<int>> output = {};

    void tree(TreeNode* node, int depth) {
        if (node == nullptr) {         
            return;
        }
        if (output.size() < depth) {
            output.push_back({node->val});
        }
        else {
            output[depth-1].push_back(node->val);
        }
        tree(node->left, depth+1);
        tree(node->right, depth+1);
    }
    
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        tree(root, 1);
        return output;
    }
};