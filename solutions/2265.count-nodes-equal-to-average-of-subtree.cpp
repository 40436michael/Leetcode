/*
 * @lc app=leetcode id=2265 lang=cpp
 *
 * [2265] Count Nodes Equal to Average of Subtree
 */
// @status: unfamiliar
// @lc code=start
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
    int ans=0;
    pair<int,int> postorder(TreeNode* root) {
        if (root == nullptr) return{0,0};
        int count=0,sum=0;
        auto [leftSum, leftCount]=postorder(root->left);
        auto [rightSum, rightCount]=postorder(root->right);
        count=leftCount+rightCount+1;
        sum=leftSum+rightSum+root->val;
        if(root->val==(sum/count))
            ans++;
        return {sum,count};
    }
    int averageOfSubtree(TreeNode* root) {
        postorder(root);
        return ans;

    }
};
// @lc code=end

