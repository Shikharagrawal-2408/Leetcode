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

/*
step1: find the node to be deleted b comparisons.
step2:- restructure its children while preserving BST order
    there can be 3 cases for deleting a node
    Case1: no children(leaf node) -> this can be deleted directly.
    Case2: One child-> replace the current node with its only child
    Case3: two children-> to maintain the BST order, we can either choose inorder successor(smallest value RST) or inorder predecessor(largest value in LST) and replace with current node.
*/

class Solution {
public:

    TreeNode* minelement(TreeNode* root)
    {
        while(root->left!=NULL)
        {
            root=root->left;
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
        return NULL;

        if(key<root->val)
        root->left=deleteNode(root->left,key);

        else if(key>root->val)
        root->right=deleteNode(root->right,key);

        else
        {
            //no left child:- replace the node with its right child
            if(root->left==NULL)
            {
                //this will handle leaf case also
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }
            // node has no right child
            else if(root->right==NULL)
            {
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }
            // Case3: Node has two children
            // find inorder successor

            TreeNode* temp = minelement(root->right);
            root->val = temp->val;

            root->right=deleteNode(root->right,temp->val);
        }
        return root;
        
    }
};