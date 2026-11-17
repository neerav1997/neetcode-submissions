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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int max = 1;
        int curr = 0;

        depth(root, max, curr);
        return max;
    }

    void depth(TreeNode* root, int &max, int curr) {
        if(!root) return;
        curr++;
        if(curr > max) max = curr;
        depth(root->left, max, curr);
        depth(root->right, max, curr);
    }
};
