#include<iostream>
using namespace std;

//Linklist 
//It is dyanmic data structure (esko aap grow ya shrink kar sakte h runtime pe , so no memory wastage as compare to array)
// its is a linear data structure jo collecction of nodes se banta h 
//node is a collection of data and next node pointer

// why linklist is needed ?
// aapme ek array bana liya 10 size ka aap eske size runtime pe change nhi kar sakte ,lekin linklist mai kar sakte h (grow ya shrink kar sakte h , run time pe )

// Tpes of linklist 
// 1.singly linklist  2.Doubly link list   3. Circular linklist    4.Circulatr doubly linklist




/*
//1.singly link list
class Node{
    public:
    int data;
    Node*next;

    //constructer ke help se node mai intialize kiya
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //destructor (help in deletion)
    ~Node(){
        int value=this->data;

        //memory free code
        if(this->next !=NULL ){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node with data  "<<value<<endl;
    }
};


//yaha maine "head " ko reference liya h kyuki mai chata hu jo mere original linklist h uske ander hi chnage ho 
void InsertAtHead(Node * &head,Node*&tail,int data){

    //new node create
    Node*temp=new Node(data);
     if(tail==NULL){
        tail=temp;
        head=temp;
    }

    temp->next=head;
    head=temp;
    
}

void InsertAtLast( Node*&tail,Node*&head,int data){
    //creation of node
    Node*nayanode=new Node(data);
    if(tail==NULL){
        tail=nayanode;
        head=nayanode;
    }
    else{
    tail->next=nayanode;
    tail=tail->next;
    }
    
}


void InsertAtposition(Node*&head,Node*&tail,int data,int position){

    //creation of new node
    Node*nayanode=new Node(data);
    Node*temp=head;
    int count=1;

    //insert at start position
    if(position==1){
        // nayanode->next=head;
        // head=nayanode;
        // return;

        //another way;
        InsertAtHead(head,tail,data);
        return;

        
    }
    
    while(count<position-1){
        temp=temp->next;
        count++;
    }

    //Inserting at last position
    if(temp->next==NULL){
        InsertAtLast(tail,head,data);
        return;
    }

    nayanode->next=temp->next;
    temp->next=nayanode;

}

//Deletion
void Deletenode(Node*&head,int position){

    //Deletion of first/start node
    if(position==1){
        Node*temp=head;
        head=head->next;
        //memory free
        temp->next=NULL;
        delete temp;
    }
    else{

        //deletion any middle node or last node
        Node*current=head;
        Node*prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=current;
            current=current->next;
            cnt++;

        }
        prev->next=current ->next;
        current->next=NULL;
        delete current;
    }
}


void print(Node*&head){
    Node*temp=head;
 
    while(temp !=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    //created a new node
    //Node* node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;


    //head pointed  to node1
    Node*head=NULL;


    //Insertion from front
    InsertAtHead(head,tail,20);
    InsertAtHead(head,tail,30);
    InsertAtHead(head,tail,40);
    InsertAtHead(head,tail,50);

    //print the elements in linklist
    print(head);


    Node*head1=NULL;
    Node*tail=NULL;

    //Insertion from last
    InsertAtLast(tail,head,20);
    InsertAtLast(tail,head,30);
    InsertAtLast(tail,head,40);
    InsertAtLast(tail,head,50);

    //print the elements in linklist
    print(head1);


    //Insertion at any position
    InsertAtposition(head1,tail,90,3);
    InsertAtposition(head1,tail,5,1);
    InsertAtposition(head1,tail,85,8);

    //verify head and tail sahi jagah point kar rha h ki nhi
    cout<<head1->data<<endl;
    cout<<tail->data<<endl;
    print(head1);



    Deletenode(head1,1);
    Deletenode(head1,7);
    Deletenode(head1,3);
    print(head1);

    //last node ke delete ke case mai tail kaise handle hoga ye h.w. h 



}

*/









/*
//Doubly linklist
class Node{

    public:
    Node*prev;
    int data ;
    Node*next;


    //constructer for insertion
    Node(int data){
        this->prev=NULL;
        this->data=data;
        this->next=NULL;
    }


    //desctructor
    ~Node(){
        int val=this->data;
        if(next !=NULL){
            delete next;
            next=NULL;
        }

        cout<<"Memory free for node with data  "<<val<<endl;
    }

};

void InsertAtFirst(Node*&head,Node*&tail,int data){
    //creation of node
    Node *node=new Node(data);

    if(head==NULL){
        head=node;
        tail=node;
    }
    else{
    node->next=head;
    head->prev=node;
    head=node;
    }
    

}

void InsertAtLast(Node*&tail, Node*&head ,int data){
    //creation of node
    Node*node=new Node(data);
    if(tail==NULL){
        tail=node;
        head=node;
    }
    else{
        tail->next=node;
        node->prev=tail;
        tail=node;
    }
}

void InsertAtposition(Node*&head,Node*&tail,int data,int position){
    //Insert at First/start
    if(position==1){
        InsertAtFirst(head,tail,data);
        return;
    }

    Node*temp=head;
    int cnt=1;
    while (cnt<position-1)
    {
        cnt++;
        temp=temp->next;
    }

    //Insert at last position
    if(temp->next==NULL){
        InsertAtLast(tail,head,data);
        return;
    }

    //Insert at any position
    //creating node
    Node*node=new Node(data);

    node->next=temp->next;
    temp->next->prev=node;
    temp->next=node;
    node->prev=temp;

}

//traverse the linklist
void print(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}

//give the length of linklist
void getlength(Node*&head){

    int len=0;
    Node*temp=head;
    while(temp !=NULL){
        len++;
        temp=temp->next;
    }
    cout<<len<<endl;

}

void deletion(Node*&head,Node*tail,int position){
    Node*temp=head;

    //delete start /first node
    if(position==1){
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;

        delete temp;
    }
    else{
        Node*current=head;
        Node*prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=current;
            current=current->next;
            cnt++;
        }

        current ->prev=NULL;
        prev->next=current->next;
        current ->next=NULL;

        delete current;

    }

    




    
}



int main(){
    Node*head=NULL;
    Node*tail=NULL;

    getlength(head);


    InsertAtFirst(head,tail,3);
    InsertAtFirst(head,tail,8);
    InsertAtFirst(head,tail,17);
    print(head);


    InsertAtLast(tail,head,25);
    print(head);


    InsertAtposition(head,tail,100,2);
    print(head);
    InsertAtposition(head,tail,108,1);
    print(head);
    InsertAtposition(head,tail,102,7);
    print(head);

    cout<<head->data<<endl;
    cout<<tail->data<<endl;


    
    deletion(head,tail,1);
    print(head);
    deletion(head,tail,6);
    print(head);
    deletion(head,tail,2);
    print(head);


    //handle head,tail position h.w.



}

*/

    

//Circular linklist

class Node{

    public:
    int data;
    Node*next;

    //constructer
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //descructor
    ~Node(){
        int val=this->data;
        if(this->next !=NULL){
            delete next;
            next=NULL;
        }
       cout<<"Memory free for node with data  "<<val<<endl;
    
    }
};

//value ke adhar pe insertion
void InsertNode(Node*&tail, int element, int data){
   
    if(tail==NULL){
        //empty list
        Node*temp=new Node(data);
        tail=temp;
        temp->next=temp;

    }
    else{
        //non empty list
         //assuming that the "element" is present in the list

        Node*curr=tail;
        while(curr->data !=element){
            curr=curr->next;
        }
        //element found ->curr is reprsenting wala element
        Node*temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;

    }

}

//value ke adhar pe deletion
void DeleteNode(Node*&tail,int element){

    //empty list
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    else{
        //Non empty
        //assuming element is present in list

        Node*prev=tail;
        Node*curr=tail->next;

        while(curr->data !=element){
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;
        //1 Node linked list
        if(curr==prev){
            tail=NULL;
        }
        else if(tail==curr){
        //>=2 Node lisnklist
            tail=prev;
        }
        curr->next=NULL;
        delete curr;

    }

  
}

void print(Node*tail){

    //empty list
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    //location of tail store kar liya 
    Node*temp=tail;
    do{
        cout<<tail->data<<"  ";
        tail=tail->next;
    }while(tail !=temp);
    cout<<endl;


}

int main(){
    Node*tail=NULL;
    

    //empty list inserion
    InsertNode(tail,5,3);
    print(tail);

    InsertNode(tail,3,9);
    InsertNode(tail,9,7);
    InsertNode(tail,3,16);
    InsertNode(tail,7,1);
    InsertNode(tail,1,0);

    print(tail);

    DeleteNode(tail,3);
    print(tail);

    DeleteNode(tail,0);
    print(tail);

    DeleteNode(tail,16);
    print(tail);


}




    





