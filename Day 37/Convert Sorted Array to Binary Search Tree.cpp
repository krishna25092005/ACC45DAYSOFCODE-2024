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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return makeBST(nums, 0, nums.size() - 1);
    }

private:
    TreeNode* makeBST(const vector<int>& nums, int left, int right) {
        if (left > right) {
            return nullptr;
        }

        // Choose the middle element to ensure balanced BST
        int mid = left + (right - left) / 2;
        TreeNode* root = new TreeNode(nums[mid]);

        // Recursively build the left and right subtrees
        root->left = makeBST(nums, left, mid - 1);
        root->right = makeBST(nums, mid + 1, right);

        return root;
    }
};
