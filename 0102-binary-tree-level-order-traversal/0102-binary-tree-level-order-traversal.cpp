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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        vector<int> temp;
        queue<TreeNode*> Q;
        if(root == NULL) return res;

        Q.push(root);
        Q.push(NULL);

        while(!Q.empty()){
            TreeNode* cur = Q.front();
            Q.pop();

            if(cur == NULL){
                res.push_back(temp);
                temp.clear();
                if(!Q.empty()){
                    Q.push(NULL);
                }
                continue;
            }
            temp.push_back(cur->val);
            if(cur->left){
                Q.push(cur->left);
            }
            if(cur->right){
                Q.push(cur->right);
            }
        }
        return res;
    }
};