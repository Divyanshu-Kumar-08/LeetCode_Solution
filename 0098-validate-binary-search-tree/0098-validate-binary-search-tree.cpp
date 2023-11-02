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
    bool checkValid(TreeNode* node, TreeNode* high, TreeNode* low) {
        if(node == nullptr) {
            return true;
        }

        if(high != nullptr && high->val <= node->val ||
            low != nullptr && low->val >= node->val) {
            return false;
        }
        bool left = checkValid(node->left, node, low);
        bool right = checkValid(node->right, high, node);
        return (left && right);
    }
    bool isValidBST(TreeNode* root) {
        return checkValid(root, nullptr, nullptr);
    }
};