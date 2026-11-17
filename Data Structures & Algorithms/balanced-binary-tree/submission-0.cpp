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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;

        return height(root) != -1;

    }

    int height(TreeNode* root) {
        if(!root) return 0;
       
        int ll = height(root->left);
        if(ll == -1) return -1;
        int rr = height(root->right);
        if(rr == -1) return -1;

        if(abs(rr-ll) > 1 ) return -1;
        return 1 + max(ll, rr);

    }
};
