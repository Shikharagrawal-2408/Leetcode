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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        queue<TreeNode*> q;

        if(root==NULL)
        return res;

        bool left=false;

        q.push(root);
        while(!q.empty())
        {
            int a=q.size();
            vector<int>ans(a);
            for(int i=0;i<a;i++)
            {
                TreeNode* frontval=q.front();
                q.pop();
                int index=left?i:a-1-i;

                ans[index]=frontval->val;
                if(frontval->right!=NULL)
                q.push(frontval->right);

                if(frontval->left!=NULL)
                q.push(frontval->left);

            }
            left=!left;
            res.push_back(ans);
        }
        return res;
    }
};