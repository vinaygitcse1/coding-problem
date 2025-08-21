#include<iostream>
using namespace std;

//  Two Sum IV - Input is a BST
// approach 1:
// pahle elemet ko lenge mana 10 h fir target se minus karege jo bacha usko left ya right mai search karege if found then true return 
// But T.C. O(n2)


// Approach 2:
//Maine BST ka inorder nikl liya (kyuki wo sorted hota h) fir two pointer apporach lagane h 
//T.c. O(n)
/*
void inorder(BinaryTreeNode<int>* root,vector<int>&temp){
    if(root==NULL){
        return ;
    }
    inorder(root->left,temp);
    temp.push_back(root->data);
    inorder(root->right,temp);
    
    
}


bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
    vector<int>temp;

    //stored inorder sorted values
	inorder(root,temp);


    //Use two pointer  apporach to find if pair exist
    int i=0;
    int j=temp.size()-1;

    while(i<j){
        int sum=0;
        sum=temp[i]+temp[j];
        if(sum==target){
            return true;
        }
        else if(sum>target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;


}*/





//  Flatten BST To A Sorted List(aap BST ko flat karke ek linklist bana do jo ki sorted honi chaye)

// Approach: Mujhe pata h inorder sorted hota h maine sare nodes ka data save kar liye ek vector mai , then nodes create karte gya or left mai null dala or right se dusri node create kiya or add karte gya 
//last mai left and right dono mai null daal diya 

/*
void inorder(TreeNode<int>* root , vector<int> &temp){
    if(root==NULL){
        return;
    }

    inorder(root->left, temp);
    temp.push_back(root->data);
    inorder(root->right,temp);

}
TreeNode<int>* flatten(TreeNode<int>* root)
{


    vector<int>inorder_val;
    //1st part
    inorder(root, inorder_val);



    TreeNode<int>* newRoot=new TreeNode<int>(inorder_val[0]);
    TreeNode<int>* curr=newRoot;


    //2nd Part
    for(int i=1;i<inorder_val.size();i++){

        TreeNode<int>*temp=new TreeNode<int>(inorder_val[i]);
        curr->left=NULL;
        curr->right=temp;
        curr=temp;
    }

    //3rd part
    curr->left=NULL;
    curr->right==NULL;


    return newRoot;
    
}*/







//  Normal BST To Balanced BST
// pahle inorder niklo vector mai save kara lo , fir mid niklo , or fir tree bana lo recursion ki help se

/*
void inorder(TreeNode<int>*root,vector<int>&temp){
    if(root==NULL){
        return ;
    }
    inorder(root->left,temp);
    temp.push_back(root->data);
    inorder(root->right,temp);
}


TreeNode<int>* inordertoBST(int s,int e,vector<int>temp){

    //base case
    if(s>e){
        return NULL;
    }

    int mid=(s+e)/2;

    TreeNode<int>* root=new TreeNode<int>(temp[mid]);
    root->left=inordertoBST(s,mid-1,temp);
    root->right=inordertoBST(mid+1,e,temp);
    return root;

}
TreeNode<int>* balancedBst(TreeNode<int>* root) {
    
    //Step 1
    vector<int>temp;
    inorder(root,temp);

    //find mid of vector
    int start=0;
    int end=temp.size()-1;
    return inordertoBST(start, end, temp);
    

}
*/








//BST from preorder
//aproach 1
//pahle aap preoredr , se insert into BST wale function se BST bana di 
//T.C.=O(n2)



//approach 2
//preorder given h or hum sorted order se inorder bana lenge 
//fir preorder + inorder se BST Bana lenge
//T.C. O(nlogn)


//Approach 3
//T.C. O(n)
//same as near isBST(int max, int min wala approach)
/*
BinaryTreeNode<int>* solve(vector<int> &preorder,int min, int max, int&i){
    if(i>=preorder.size()){
        return NULL;
    }

    if(preorder[i]<min || preorder[i]>max){
        return NULL;
    }

    BinaryTreeNode<int>*root=new BinaryTreeNode<int>(preorder[i++]);
    root->left=solve(preorder,min,root->data,i);
    root->right=solve(preorder,root->data,max,i);

    return root;

}
BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
    // Write your code here.
    int min=INT_MIN;
    int max=INT_MAX;
    int index=0;

    return solve(preorder,min,max,index);
}*/








//Merge two BST (most important question)

