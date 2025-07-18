#ifndef BST_H
#define BST_H


#include <iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value)
    {
        val=value;
        left = right= NULL;
    }
};

struct BinarySearchTree
{
    TreeNode* root= NULL;
    TreeNode* Add(int value,TreeNode* root)
    {
        if(root==NULL) return new TreeNode(value);
        if(root->val > value) root->left=Add(value,root->left);
        else root->right=Add(value,root->right);
        return root;
    }
    void insert(int value)
    {
        root=Add(value,root);
    }
    void printinorder(TreeNode* root)
    {
        if(root==nullptr) return;
        printinorder(root->left);
        cout << root->val << " ";
        printinorder(root->right);
    }
    void inorder()
    {
        printinorder(root);
        cout << endl;
    }
};
#endif
