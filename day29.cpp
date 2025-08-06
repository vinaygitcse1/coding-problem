#include<iostream>
#include<queue>
using namespace std;

//Binary Search Tree
//for every node left sub tree ka data root se chota hoga , har node ke right sub tree ke ander ka data root se bada hoga 

class Node{
    public:
    int data;
    Node*left;
    Node*right;


    Node(int d){
        this->data=d;
        left=NULL;
        right=NULL;
    }
};


//insert in BST
//T.C=O(log n) in best and avg case
//in worst case o(n)
Node* insert_BST(Node* &root , int indata){
    if(root==NULL){
        root= new Node(indata);
        return root;
    }
    if(root ->data < indata ){
        //right mai insert karna h
        root->right = insert_BST(root->right,indata);  
        
    }
    else{
        //left part mai insert karna h
        root->left=insert_BST(root->left,indata);
    }

    return root;
}


//taking input
void takeInput(Node* &root){
     int data;
     cin>>data;

     while(data !=-1){
        insert_BST(root,data);
        cin>>data;
     }
}

//Search in BST
// (but the time complexity is n but space is also n) 
/*bool searchInBST(Node*root, int x) {
    //
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    if(x<root->data){
        return searchInBST(root->left, x);
    }
    else{
       return  searchInBST(root->right , x);
    }

}*/

//Iterative way esme space complexity is O(1) h 
bool searchBST(Node*root, int x){

    Node*temp=root;

    while(temp !=NULL){
        if(temp->data==x){
            return true;
        }
        if(temp->data< x){
            temp=temp->right;
        }
        else{
            temp=temp->left;
        }
    }
    return false;
}



//find minimum in BST
Node*  MinValue(Node* root){
    if(root==NULL){
        return root;
    }
    while(root->left !=NULL){
        root=root->left; 
    }
    return root;
}


//find maximum in BST
Node*  MaxValue(Node* root){
    if(root==NULL){
        return root;
    }
    while(root->right !=NULL){
        root=root->right; 
    }
    return root;
}

void print(Node*root){
    if(root==NULL){
        return;
    }
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}

void Levelorder(Node*root){
    queue<Node*>q;
    q.push(root);

    //level complete to seperator daal diya 
    q.push(NULL);

    while(!q.empty()){
        Node*temp=q.front();


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

//deletion
Node* Deletion_BST(Node* &root, int val){
    //base case
    if(root==NULL){
        return root;
    }

    if(root->data==val){

        //0 child
        if(root->left==NULL && root->right==NULL){
            root=NULL;
            return root;
        }

        //1 child
        //for left child
        if(root->left !=NULL && root->right==NULL){
            Node*temp=root->left;
            delete root;
            return temp;
        }

        //for right child 
        if(root->left ==NULL && root->right !=NULL){
            Node*temp=root->right;
            delete root;
            return temp;

        }


        //2 child
        if(root->left!=NULL && root->right !=NULL){
            int min=MinValue(root->right)->data;
            root->data=min;
            root->right=Deletion_BST(root->right, min);
            return root;
        }
    }
    else if(root->data >val){
        root->left=Deletion_BST(root->left, val);
        return root;
    }
    else{
        root->right=Deletion_BST(root->right , val);
        return root;
    }
}

int main(){
    Node*root=NULL;

    cout<<"Enter data to create BST  "<<endl;
    takeInput(root);
    cout<<endl;

    cout<<"Printing the BST  "<<endl;
    Levelorder(root);
    cout<<endl;



    cout<<"Minimum value in BST   "<<endl;
    cout<<MinValue(root)->data<<"  ";
    cout<<endl;

    cout<<"Maximum value in BST   "<<endl;
    cout<<MaxValue(root)->data<<"  ";
    cout<<endl;

    cout<<"Deletion in BST    "<<endl;
    root= Deletion_BST(root, 50);

    print(root);


    //Home work 
    // inorder predecessor of a value present in  BST problem 
    // inorder successor of a value present in BST problem




}