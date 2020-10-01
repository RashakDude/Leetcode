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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        stack<vector<int>> st;
        if(root==NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> temp;
        while(q.size()>1) {
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL){
                st.push(temp);
                temp.erase(temp.begin(),temp.end());
                q.push(NULL);
                continue;
            }
            temp.push_back(curr->val);
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
        if(temp.size()>0) st.push(temp);
        while(st.empty()==false){
            res.push_back(st.top());
            st.pop();
        }
        return res; 
    }
};