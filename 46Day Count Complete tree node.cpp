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
    int countNodes(TreeNode* root) {
        // Base Case when your root is equal to null you simply return 0
        if(!root){
            return 0;
        }
        
       int a= countNodes(root->left); // store the lenght of left subtree by making the left recursive call on the tree
       int b= countNodes(root->right);// store the length of right subtree by making the right recursive call on the tree
        return a+b+1; // then you simply return a+b +1 here I do +1 because you also have to add the root node e.g--- leftnode + rightnode +rootnode
    }
};
