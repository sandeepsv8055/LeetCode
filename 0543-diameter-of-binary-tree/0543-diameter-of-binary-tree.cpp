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

//O(N)
class Solution {
public:
int dia =0; //declared globbaly
    
    int dfs(TreeNode*root){
        if(root == NULL) return 0;
        int lh = dfs(root->left);
        int rh = dfs(root->right);

        dia = max(dia, lh+rh);
        return 1+max(lh,rh);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return dia;
    }
};


// class Solution {
// public:
//     int height(TreeNode*root){
//         if(!root) return 0;
//         return 1+max(height(root->left),height(root->right));
//     }

//     int diameterOfBinaryTree(TreeNode* root) {
//         if(root==NULL) return 0;
//         int lh = height(root->left);
//         int rh = height(root->right);
//         int currDia = lh+rh;

//         int leftDia = diameterOfBinaryTree(root->left);
//         int rightDia = diameterOfBinaryTree(root->right);
//         return max({leftDia, rightDia, currDia});
//     }
// };