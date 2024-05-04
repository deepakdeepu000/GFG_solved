//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}


// } Driver Code Ends
/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution
{
    public:

    //Function to return a tree created from postorder and inoreder traversals.
    unordered_map<int , int > mp;
    Node* TreeConstructer (int post[] , int pstart , int pend , int in[] , int istart , int iend){
        
        if( istart > iend || pstart > pend) return NULL;
        
        // // storing the root element present in the post order array  [left , right , root]
        int proot = post[pend];
        
        // // index of the root element in the inorder array
        Node* root = new Node(proot);
        int elem = mp[root -> data];
        
        int nele = elem - istart;
        
        //constructing  my left subtree 
        
        root -> left  = TreeConstructer (post , pstart , pstart + nele - 1, in , istart , elem - 1);
        
        // constructinf my right subtree
        
        root -> right = TreeConstructer (post , pstart + nele , pend - 1 , in , elem + 1 , iend );
        
        return root;
        
    }
    
    Node *buildTree(int in[], int post[], int n) {
        // Your code here
        
        for(int i = 0 ; i < n ; i ++ ){
            mp[in[i]] = i;
        }
        return TreeConstructer(post,  0 , n-1 , in , 0 , n-1);
        
       
        
    }
};


//{ Driver Code Starts.

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Solution obj;
        Node* root = obj.buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends