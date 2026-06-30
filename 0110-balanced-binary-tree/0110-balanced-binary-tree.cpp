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
    int treeHeight(TreeNode* root){ 
        if(root == NULL){
            return 0;
        }
        int LSTHeight = treeHeight(root->left);
        int RSTHeight = treeHeight(root->right);
        return 1 + max(LSTHeight , RSTHeight) ;
    }

    bool isBalancedHelper(TreeNode* root) {
        if(root == NULL)return true;

        bool lstBalanced = isBalancedHelper(root->left);
        bool rstBalanced = isBalancedHelper(root->right);
        int diff = treeHeight(root->left) - treeHeight(root->right);
        if((diff == 1 || diff == -1 || diff == 0) && lstBalanced && rstBalanced ){
            return true;
        }
        else return false;


    }
    bool isBalanced(TreeNode* root) {
        bool ans = isBalancedHelper(root);
        return ans;
    }
};