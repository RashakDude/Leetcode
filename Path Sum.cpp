#include <bits/stdc++.h>
using namespace std;

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
    bool util(TreeNode* root,int sum){
        if(root->left==NULL && root->right==NULL) return sum == root->val;
        sum -= root->val;
        if(root->left && util(root->left,sum)) return true;
        if(root->right && util(root->right,sum)) return true;
        sum += root->val;
        return false;
    }
    
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL) return false;
        return util(root,sum);
    }
};