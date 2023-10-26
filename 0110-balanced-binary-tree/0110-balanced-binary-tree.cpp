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
    bool findHeight(TreeNode* node, int& h) {
        if(node == nullptr) {
            h = -1;
            return true;
        }
        
        int left = 0;
        int right = 0;
        bool l = findHeight(node->left, left);
        bool r = findHeight(node->right, right);
        if(!l || !r)
            return false;
        if(abs(left - right) > 1)
            return false;
        h = max(left, right) + 1;
        return true;
    }

    bool isBalanced(TreeNode* root) {
        if(root == nullptr)
            return true;
        int height = 0;
        return findHeight(root, height);
    }
};