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

TreeNode *ans=new TreeNode();
      TreeNode *ptr=ans;
   void inorder(TreeNode*root)
   {
       if(root==NULL) return;
       if(root->left)inorder(root->left);
       ans->right=new TreeNode(root->val);
       ans=ans->right;
       if(root->right)inorder(root->right);
   }
   TreeNode* increasingBST(TreeNode* root) {
      inorder(root);
       return ptr->right;
   }
};
