#include <vector>
using namespace std;

class Solution {
    void dfs(TreeNode* node, vector<int>& out) {
        if (!node) return;
        dfs(node->left, out);
        out.push_back(node->val);
        dfs(node->right, out);
    }

public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> out;
        dfs(root, out);
        return out;
    }
};
