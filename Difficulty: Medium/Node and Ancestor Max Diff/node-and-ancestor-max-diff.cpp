/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int ans = -1e9;
    
    int fun(Node *root){
        
        if(root == nullptr) return 1e9;
        
        int left = fun(root->left);
        int right = fun(root->right);
        
        ans = max({root->data - left, root->data - right, ans});
        
        return min({left, right, root->data});
    }
    int maxDiff(Node* root) {
        // code here
        ans = INT_MIN;
        
        fun(root);
        
        return ans;
        
    }
};