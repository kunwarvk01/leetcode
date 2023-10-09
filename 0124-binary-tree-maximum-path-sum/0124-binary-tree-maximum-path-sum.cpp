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
    int pathSum(TreeNode* node, int& mx){
        if(!node) return 0;
        int l = max(0,pathSum(node->left,mx));
        int r = max(0,pathSum(node->right,mx));
        int val = node->val;
        mx = max(mx,l+r+val);
        return max(l,r)+val;
    }
    int maxPathSum(TreeNode* root) {
        int mx = INT_MIN;
        pathSum(root,mx);
        return mx;
    }
};