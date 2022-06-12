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
class Solution
{
public:
    int findSum(TreeNode *root, int &nodeCount)
    {
        if (!root)
            return 0;

        nodeCount++;
        int l = findSum(root->left, nodeCount);
        int r = findSum(root->right, nodeCount);

        return root->val + l + r;
    }

public:
    void visitEachNode(TreeNode *root, int &ans)
    {
        if (!root)
            return;

        int nodeCount = 0;
        int avg = (findSum(root, nodeCount)) / nodeCount;
        if (avg == root->val)
            ans++;

        visitEachNode(root->left, ans);
        visitEachNode(root->right, ans);
    }

public:
    int averageOfSubtree(TreeNode *root)
    {
        int ans = 0;
        visitEachNode(root, ans);

        return ans;
    }
};