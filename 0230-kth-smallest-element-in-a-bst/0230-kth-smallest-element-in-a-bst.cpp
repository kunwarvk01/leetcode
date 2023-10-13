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
    void solve(TreeNode* node, int&ans, int& k){
        if(!node) return;
        solve(node->left,ans,k);
        k--;
        if(k==0) {ans=node->val; return;}
        solve(node->right,ans,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans=-1;
        solve(root,ans,k);
        return ans;
    }
};