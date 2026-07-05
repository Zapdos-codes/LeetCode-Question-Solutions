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
    int treeHeight (TreeNode* root) {
        if(root == nullptr)return 0;

        int lstHeight = treeHeight(root->left);
        int rstHeight = treeHeight(root->right);

        return 1 + max(lstHeight,rstHeight);
    }

    int diaHelper(TreeNode* root) {
        if(root == NULL)return 0;

        int op1 = treeHeight(root->left) + treeHeight(root->right);
        int op2 = diaHelper(root->left);
        int op3 = diaHelper(root->right);

        return max(op1,max(op2,op3));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return diaHelper(root);
    }
};