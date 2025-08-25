// Largest BST in Binary Tree
//Approach mai har ek node pe jake check karuga isValidBST h ki nhi agar h to uska size ek integer mai store kar lunga 
//if n nodes aur har ek n time le rha h so n2 time complexity 
//So T.C. O(n2) 


//approach 2
/*
class info {
public:
    int maxi;
    int mini;
    bool isBST;
    int size;
};

info solve(TreeNode *root, int &ans) {
    // base case for a null node
    if (root == NULL) {
        return {INT_MIN, INT_MAX, true, 0};
    }

    info left = solve(root->left, ans);
    info right = solve(root->right, ans);

    info currNode;
    currNode.size = left.size + right.size + 1;

    // Check if the current node can be part of a BST
    // The current node must be a BST itself and satisfy the BST property with its children
    if (left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini)) {
        currNode.isBST = true;
        // Update maxi and mini for the current subtree
        currNode.maxi = max(root->data, right.maxi);
        currNode.mini = min(root->data, left.mini);
        // Update the maximum size if a valid BST is found
        ans = max(ans, currNode.size);
    } else {
        currNode.isBST = false;
        // If not a BST, propagate the largest possible range
        currNode.maxi = INT_MAX;
        currNode.mini = INT_MIN;
    }

    return currNode;
}

int largestBST(TreeNode * root){
    int maxsize=0;
    info temp=solve(root, maxsize);
    return maxsize;
}*/


