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
    bool isValid(TreeNode* node, TreeNode* max, TreeNode* min) {
        if(node == nullptr) {
            return true;
        }

        if((max != nullptr && max->val <= node->val) ||
             (min != nullptr && min->val >= node->val)) {
            return false;
        }

        return isValid(node->left, node, min) && isValid(node->right, max, node);
    }

    bool isValidBST(TreeNode* root) {
        return isValid(root, nullptr, nullptr);
    }
};