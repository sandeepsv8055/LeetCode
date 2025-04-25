/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL || root==p ||root==q) return root;

        TreeNode* left = lowestCommonAncestor(root->left,p,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);
        if(left==NULL){
            return right;
        }
        if(right==NULL){
        return left;
        }
        else return root;

    }
};

// class Solution {
// public:
//     bool exists(TreeNode* root,TreeNode* target){
//         if(root == NULL) return false;
//         if(root== target) return true;
//         return exists(root->left, target) || exists(root->right, target) ;
//     }

//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(exists(root->left,p) && (exists(root->left,q))) return  lowestCommonAncestor(root->left,p,q);
//         else if(exists(root->right,p) && (exists(root->right,q))) return  lowestCommonAncestor(root->right,p,q);
//         return root;
//     }
// };