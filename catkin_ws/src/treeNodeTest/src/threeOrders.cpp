#include <iostream>
#include <vector>

using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

class Solution
{
    private: 
    vector<int> pre, mid, post;
    public:
    vector<vector<int>> threeOrders(TreeNode *root)
    {
        vector<vector<int>> vec;
        if (root == NULL) return vec;

        preroot(root);
        midroot(root);
        postroot(root);

        vec = {pre, mid, post};
        return vec;
    }

    void preroot(TreeNode *root)
    {
        if (root == NULL) return;
        pre.push_back(root->val);
        preroot(root->left);
        preroot(root->right);
    }

    void midroot(TreeNode *root)
    {
        if (root == NULL) return;        
        midroot(root->left);
        mid.push_back(root->val);
        midroot(root->right);
    }

    void postroot(TreeNode *root)
    {
        if (root == NULL) return;
        midroot(root->left);
        midroot(root->right);
        mid.push_back(root->val);
    }
};

int main()
{
    cout << "This code is OK" <<endl;
    return 0;
}