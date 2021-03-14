#include <iostream>

using namespace std;

struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x):val(x), left(nullptr), right(nullptr){}
};

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param pRoot TreeNode类 
     * @return TreeNode类
     */
    TreeNode* Mirror(TreeNode* pRoot) {
        // write code here
        if (pRoot == NULL) return pRoot;
        DFS(pRoot);
        return pRoot;
    }
    
    void DFS(TreeNode* root)
    {
        if(root == NULL) return;
        swap(root->left, root->right);
        DFS(root->left);
        DFS(root->right);
    }
};

int main()
{
    cout << "This code is OK" <<endl;
    return 0;
}