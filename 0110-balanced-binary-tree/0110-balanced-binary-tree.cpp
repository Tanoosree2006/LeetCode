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
    int Balanced(TreeNode* node){
        if(!node) return 0;
        int leftheight=Balanced(node->left);
        if(leftheight==-1) return -1;
        int rightheight=Balanced(node->right);
        if(rightheight==-1) return -1;
        if(abs(leftheight-rightheight)>1) return -1;
        return max(leftheight,rightheight)+1;
    }
    bool isBalanced(TreeNode* root) {
        return Balanced(root)!= -1;
    }
};