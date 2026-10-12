class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL) return 0;
        if(root->left==NULL) return height(root->right)+1;
        if(root->right==NULL) return height(root->left)+1;
        return min(height(root->left),height(root->right))+1;
    }
    int minDepth(TreeNode* root) {
    return height(root);    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna