#include<bits/stdc++.h>
using namespace std;
//**
 // Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode*curr=root;
        while(curr) {
             if(curr->left) {
                TreeNode*num=curr->left;
                 while(num->right) num=num->right;
                 num->right=curr->right;
                 curr->right=curr->left;
                 curr->left=NULL;
             }
             curr=curr->right;
        }
    }
};














