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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long>arr;

        queue<TreeNode*> q;

        q.push(root);
        // TreeNode* a=q.front();

        while(!q.empty())
        {
            int a=q.size();
            long long sum=0;
            for(int i=0;i<a;i++)
            {
                TreeNode* frontval=q.front();
                q.pop();
                sum+=frontval->val;

                if(frontval->left!=NULL)
                q.push(frontval->left);

                if(frontval->right!=NULL)
                q.push(frontval->right);

            }
            arr.push_back(sum);
        }

        if(arr.size() < k)
        return -1;

        sort(arr.begin(),arr.end());
        return arr[arr.size() - k];
    }
};