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
int  helper(TreeNode* root,int &tilt){
    if(root==nullptr){
            return 0 ;
        }
        int left=root->left?helper(root->left,tilt):0;
        int right=root->right?helper(root->right,tilt):0;
        tilt=tilt+abs(left-right);

        return left+right+root->val;
}
    int findTilt(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int tilt=0;
        helper(root,tilt);
        return tilt;
    }
};