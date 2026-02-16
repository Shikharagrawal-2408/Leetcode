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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode* >q;
        vector<vector<int>>ans;
        if(root==NULL)
        return ans;

        q.push(root);
        while(!q.empty())
        {
            int a=q.size();
            vector<int>arr;
            while(a)
            {
                TreeNode* frontval=q.front();
                q.pop();
                arr.push_back(frontval->val);

                if(frontval->left!=NULL)
                q.push(frontval->left);

                if(frontval->right!=NULL)
                q.push(frontval->right);
                a--;
            }
            ans.push_back(arr);
        }
        return ans;
    }
};