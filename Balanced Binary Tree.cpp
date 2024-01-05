class Solution {
public:
    bool isBalanced(TreeNode* root) {
        bool result = true;
        helper(root, result);

        return result;
    }

    int helper(TreeNode *root, bool& balanced)
    {
         if (root == nullptr || balanced == false)
        {
            return 0;
        }
        int left_height = helper(root->left, balanced);
        int right_height = helper(root->right, balanced);

        if (abs(left_height - right_height) > 1)
        {
            balanced = false;
        }
         return max(left_height, right_height) + 1;
    }
};
