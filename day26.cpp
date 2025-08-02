#include<iostream>
#include<list>
#include<queue>
using namespace std;

//tree is non linear data structure 
//ek particular node pakad lo or upar jate jao jo jo aa rhe h wo sare ansesters h 
//ek particular node pakad lo or ninche aate jao jo jo nodes aaege bich mai wo sare decendet h 

//creation


//for n array tree
class nnode{
    public:
    int data;
    list<nnode*>n;

};



class node{
    public:
    node*left;
    int data;
    node*right;

    //constructor for intializaation
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};


//for buliding tree
node* buildtree(node*root){
    cout<<"Enter the data :"<<endl;
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    root=new node(data);

    cout<<"Enter the data that you want to insert in left of " <<data<<endl;
    root->left=buildtree(root->left);

    cout<<"Enter the data that you want to insert in right of " <<data<<endl;
    root->right=buildtree(root->right);

    return root;

}



//Level order traversal or Breath first search
/*
void Levelorder(node*root){

    queue<node*>q;
    q.push(root);

    while(!q.empty()){
        node*temp=q.front();

        cout<<temp->data<<"  ";

        q.pop();

        //agar left null nhi h to 
        if(temp->left){
            q.push(temp->left);
        }

        //agar right null nhi h to
        if(temp->right ){
            q.push(temp->right);
        }
    }
    
    

}

*/



//Level order traversal or Breath first search (modified with using seperater)
void Levelorder(node*root){
    queue<node*>q;
    q.push(root);

    //level complete to seperator daal diya 
    q.push(NULL);

    while(!q.empty()){
        node*temp=q.front();


        q.pop();

        if(temp==NULL){
            //ek level complete ho chuka h
            cout<<endl;

            if(!q.empty()){
                //queue still has some child node
                q.push(NULL);
            }
        }
        else{
                cout<<temp->data<<"  ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
         
      
    }
}





//Inorder traversal 
void Inorder(node* root){
    //base case
    if(root==NULL){
        return;
    }

    Inorder(root->left);
    cout<<root->data<<"  ";
    Inorder(root->right);
}





//Pre order traversal
void preorder(node*root){
    if(root==NULL){
        return ;
    }

    cout<<root->data<< "   ";
    preorder(root->left);
    preorder(root->right);
}





//post order traversal
void postorder(node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"  ";
}





//build tree using level order traversal
void buildfromlevelorder(node* &root){
    queue<node*>q;
    cout<<"enter the data for root"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        cout<<"Enter the data for left of "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata!=-1){
            temp->left=new node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter the data for right of "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata!=-1){
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
        
    }
}





//countleaf nodes using inorder traversal(hum kisi bhi traversal ka use karke kar sakte h)
void Inordercountleaf(node* root, int &count){
    //base case
    if(root==NULL){
        return;
    }

    Inordercountleaf(root->left, count);

    if(root->left==NULL && root->right==NULL)
    count++;

    Inordercountleaf(root->right,count);
}
int countleafnode(node*root){
    int count=0;
    Inordercountleaf(root,count);
    return count;
}





// height of tree (using postorder traversal)
int heightoftree(node*root){
    if(root==NULL){
        return 0;
    }

    int L=heightoftree(root->left);
    int R=heightoftree(root->right);

    int ans=max(L,R)+1;
    return ans;
}





//Count total number of internal nodes
void internal_nodes(node*root, int &count){
    if(root==NULL){
        return ;
    }
    internal_nodes(root->left,count);
    internal_nodes(root->right,count);

    if(root->left !=NULL || root->right !=NULL){
        count++;
    }

}
int internal_n(node*root){
    int count=0;
    internal_nodes(root,count);
    return count;
}


//Diameter of tree  (but the time complexity is O(n2))
/*
    int height(node*root){
        if(root==NULL){
            return 0;
        }
        
        int L=height(root->left);
        int R=height(root->right);
        
        int ans=max(L,R)+1;
        return ans;
    }
    
    int diameter(node* root) {
        // Your code here
        
        if(root==NULL){
            return 0;
        }
        
        int op1=diameter(root->left);
        int op2=diameter(root->right);
        int combo=height(root->left)+height(root->right)+1;
        
        //teno ka maximum is dia hoga
        int ans=max(op1,max(op2,combo));
        return ans;
    }
*/



//maine dono chizo ko merge kar diya diameter and height dono sath sath aab T.c.O(n) ho gye

/*class Solution {
  public:
  
    pair<int,int> diameterfast(Node*root){
        if(root==NULL){
            pair<int,int>p=make_pair(0,0);
            return p;
        }
        //p.first represent =diameter and p. second repersent height
        pair<int,int>left=diameterfast(root->left);
        pair<int,int>right=diameterfast(root->right);
        
        int op1=left.first;
        int op2=right.first;
        int op3=left.second+right.second;
        
        pair<int,int>ans;
        ans.first=max(op1,max(op2,op3));
        ans.second=max(left.second ,right.second)+1;
        
        return ans;
        
        
    }
    int diameter(Node* root) {
        
        pair<int,int>ans=diameterfast(root);
        
        return ans.first;
    }
};*/







//Checking Balanced tree or not (t.c.  O(n2))
/*class Solution {
  public:
    
    int height(Node*root){
        if(root==NULL){
            return 0;
        }
        
        int L=height(root->left);
        int R=height(root->right);
        
        int ans=max(L,R)+1;
        return ans;
    }
    
    bool isBalanced(Node* root) {
        
        if(root==NULL){
            return 1;
        }
        
        bool op1=isBalanced(root->left);
        bool op2=isBalanced(root->right);
        
        bool diff=abs(height(root->left)-height(root->right))<=1;
        
        if(op1 && op2 && diff){
            return 1;
        }
        else{
            return 0;
        }
        
        
        
    }
};*/


//balanced tree T.C  dono ko combine kar liya O(n) kar diya 
/*class Solution {
  public:
    
    int height(Node*root){
        if(root==NULL){
            return 0;
        }
        
        int L=height(root->left);
        int R=height(root->right);
        
        int ans=max(L,R)+1;
        return ans;
    }
    
    
    pair<bool , int> isBlancedfast(Node*root){
        if(root==NULL){
            pair<bool,int>p=make_pair(1,0);
            return p;
        }
        
        pair<bool,int>left =isBlancedfast(root->left);
        pair<bool,int>right=isBlancedfast(root->right);
        
        bool leftAns=left.first;
        bool rightAns=right.first;
        bool  diff=abs(left.second-right.second)<=1;
        
        
        pair<bool,int>ans;
        
        if(leftAns && rightAns && diff){
            ans.first=1;
        }
        else{
            ans.first=0;
        }
        
        ans.second=max(left.second,right.second)+1;
        
        return ans;
        
        
    }
    bool isBalanced(Node* root) {
        
       pair<bool,int>ans=isBlancedfast(root);
       
       return ans.first;
        
        
        
    }
};*/








// Function to check if two trees are identical.
/*
class Solution {
  public:
    
    bool isIdentical(Node *r1, Node *r2) {
        // Your Code here
        if(r1 !=NULL && r2 ==NULL || r1 ==NULL && r2 !=NULL){
            return false;
        }
        else if(r1==NULL && r2==NULL){
            return true;
        }
        else{
            if(r1->data == r2->data){
            bool L=isIdentical (r1->left  , r2->left);
            bool R= isIdentical (r1->right  , r2->right);
            return L && R;
                        }
            return false;
            }
        
    }
};*/






/*

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
    pair<bool,int> isSumTreefast(Node* root){
        //base case
        
        if(root==NULL){
            pair<bool,int>p=make_pair(true, 0);
            return p;
        }
        
        
        //leaf node
        if(root->left==NULL && root->right==NULL){
            pair<bool,int>p=make_pair(true, root->data);
            return p;
        }
        
        
        pair<bool,int>leftAns = isSumTreefast(root->left);
        pair<bool,int>rightAns = isSumTreefast(root->right);
        
        bool leftsum=leftAns.first;
        bool rightsum=rightAns.first;
        
        bool condition= root->data == leftAns.second + rightAns.second ;
        
        
        pair<bool, int>ans;
        if(leftsum && rightsum && condition){
            ans.first=true;
            ans.second= root->data +  leftAns.second  + rightAns.second;
        }
        else{
            ans.first=false;
        }
        
        return ans;
    }
    bool isSumTree(Node* root) {
        pair<bool,int>ans=isSumTreefast(root);
        return ans.first;
        
    }
};*/




//mirror binary tree
/*void mirrorBinaryTree(BinaryTreeNode<int>* root) {

	BinaryTreeNode<int>* temp;
    if(root==NULL){
		return;
	}
	if(root->left==NULL && root->right ==NULL){
		return;
	}
	if(root->left!=NULL && root->right ==NULL){
		temp=root->left;
		root->left=NULL;
		root->right=temp;
	}
	if(root->left==NULL && root->right !=NULL){
		temp=root->right;
		root->right=NULL;
		root->left=temp;
	}

	if(root->left!=NULL && root->right !=NULL){
		temp=root->right;
		root->right=root->left;
		root->left=temp;
	}

	mirrorBinaryTree(root->left);
	mirrorBinaryTree(root->right);


}*/

int main(){
    node*root=NULL;

    //creating a tree
    root=buildtree(root);

    //Level order traversal
    Levelorder(root);


    //Howework
    // Reverse level order traversal karna h (or uska code karna h )


    //Inorder Traversal
    Inorder(root);
    cout<<endl;

    //preorder Traversal
    preorder(root);
    cout<<endl;

    //post order traversal
    postorder(root);
    cout<<endl;



    //Home work solve without recursion
    // Inorder, preorder, post order


    //build tree when level order traversal is given 
    //buildfromlevelorder(root);

    cout<<endl;


    //count leaf nodes using inorder traversal
    cout<<countleafnode(root)<<endl;



    //height of tree using post order traversal
    cout<<"Height of tree is :  "<<heightoftree(root)<<endl;
    

    //Number of internal nodes count
    cout<<internal_n(root)<<endl;


    //Diameter of tree(longest path between any two nodes)
    //cout<<diameter(root)<<endl;


    //Check for balanced tree(difference between left and right sub tree not more than 1 for all nodes)
    // cout<<isBalanced(root)<<endl;



    //Check the trees are identical or not
    //cout<<isidentical(root)<<endl;



    //check sum tree or not 
    // cout<<isSumtree(root)<<endl;


    //mirror binary tree
    // cout<<mirrorBinaryTree(root);



}

