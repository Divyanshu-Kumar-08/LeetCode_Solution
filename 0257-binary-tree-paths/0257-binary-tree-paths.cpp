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
    void helper(TreeNode* node, string str, vector<string> &ans) {
        if(node == nullptr)
            return;
        
        str += to_string(node->val);
        if(node->left == nullptr && node->right == nullptr) {
            ans.push_back(str);
        } else if(node->left == nullptr) {
            str += "->";
            helper(node->right, str, ans);
        } else if(node->right == nullptr) {
            str += "->";
            helper(node->left, str, ans);
        } else {
            str += "->";
            helper(node->left, str, ans);
            helper(node->right, str, ans);
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string path = "";
        helper(root, path, ans);
        return ans;
    }
};