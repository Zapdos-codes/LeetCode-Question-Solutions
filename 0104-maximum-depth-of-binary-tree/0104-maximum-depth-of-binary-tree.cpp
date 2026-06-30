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
    int maxDepthHelper(TreeNode* root) {
        if(root == NULL)return 0;

        int lstHeight = maxDepthHelper(root->left);
        int rstHeight = maxDepthHelper(root->right);

        return 1 + max(lstHeight, rstHeight);
        

    }
    int maxDepth(TreeNode* root) {
        int height = maxDepthHelper(root);
        return height;
    }
};