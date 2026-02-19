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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>result;

        if(root==NULL)
        return result;

        //outer map -> for hd(automatically sorts the hd (left to right))
        //inner map -> for level (sorts level -> top to bottom)
        map<int,map<int,multiset<int>>> nodes;

        //each element in queue stores-> treenode -> the curr node, int hd, int depth
        queue<pair<TreeNode*,pair<int,int>>>q;

        q.push({root,{0,0}});
        while(!q.empty())
        {
            pair<TreeNode*, pair<int,int>>temp = q.front();
            q.pop();

            TreeNode* node=temp.first;
            int hd = temp.second.first;
            int level = temp.second.second;

            nodes[hd][level].insert(node->val);

            //if left exist->hd will -1 and level will be +1;
            if(node->left)
            q.push({node->left,{hd-1,level+1}});
            
            //right exist ->hd will +1 and level will be +1
            if(node->right)
            q.push({node->right,{hd+1,level+1}});
        }

        for(auto &i:nodes)
        {
            vector<int>ans;
            for(auto &levelpair:i.second)
            {
                for(auto values:levelpair.second)
                {
                    ans.push_back(values);
                }
            }
            result.push_back(ans);
        }

        return result;
    }
};