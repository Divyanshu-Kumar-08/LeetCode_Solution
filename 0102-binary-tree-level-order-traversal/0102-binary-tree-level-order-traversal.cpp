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
    int height(TreeNode *node) {
        if(node == nullptr) {
            return 0;
        }
        int left = height(node->left);
        int right = height(node->right);
        return max(left, right) + 1;
    }

    void level(vector<int> &arr, TreeNode *node, int h) {
        if(node == nullptr) {
            return;
        }

        if(h == 0) {
            arr.push_back(node->val);
            return;
        }
        level(arr, node->left, h - 1);
        level(arr, node->right, h - 1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> arr;
        int h = height(root);
        for(int i = 0; i < h; i++) {
            vector<int> lvl;
            level(lvl, root, i);
            arr.push_back(lvl);
        }
        return arr;
    }
};