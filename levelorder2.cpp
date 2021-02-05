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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         vector<vector<int>>ans;
        if(root==NULL) return ans;
       
       queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int node = q.size();
            vector<int>nodeValue;
            while(node--)
            {
              TreeNode* curr = q.front();
              nodeValue.push_back(curr->val);
                q.pop();
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
            }
           ans.push_back(nodeValue); 
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
