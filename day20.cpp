//iterative solution
 //Time complexity: o(n)
//space complexity: O(1)



// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
//     // Write your code here
//      if(head==NULL || head->next==NULL){
//      return head;
//        }
//     LinkedListNode<int>*prev=NULL;
//     LinkedListNode<int>*curr=head;
//     while(curr !=NULL){
//         LinkedListNode<int>*temp=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=temp;
//     }
//     return prev;
// }


//recursive solution
// void reverse(Node*&head,Node*prev,Node*curr){
//     //base case
//     if(curr==NULL){
//         head=prev;
//         return;
//     }

//     //solving 1 case and r.c
//     Node*forward=curr->next;
//     reverse(head,curr,forward);
//     curr->next=prev;

// }
// Node*reversethelist(Node*&head){
//     Node*prev=NULL;
//     Node*curr=head;
//     reverse(head,prev,curr);
//     return head;
// }


//approach 2 recursive solution
// Node* reverse(Node*&head){
//     if(head==NULL ||head->next==NULL){
//         return head;
//     }

//     Node* chotahead=reverse(head);
//     head->next->next=head;
//     head->next=NULL;
//     return chotahead;
// }





//H.w. Doubly linklist reverse



//find middle node 
//using count
// Node *findMiddle(Node *head) {
//     // Write your code here
//    int cnt=0;
//    Node*temp=head;
//    while(temp !=NULL){
//        cnt++;
//        temp=temp->next;
//    }
//    int len=cnt/2;
//    for(int i=1;i<=len;i++){
//        head=head->next;
//    }
//    return head;
  
// }


//slow-fast wala middle element find sloution
// Node*middle(Node*&head){
//     //0 or 1 node h sirf
//     if(head==NULL ||head->next==NULL){
//         return head;
//     }
//     //2 nodes h sirf
//     if(head->next->next==NULL){
//         return head->next;
//     }

//     //>2 nodes
//     Node*slow=head;
//     Node*fast=head->next;


//     while(fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//         }
//         slow=slow->next;
//     }
//     return slow;
// }





//Reverse linklist in K-groups (important amazon ke assemenet mai aaya tha )

// bool countchecker(Node*head,int k){
//     int count=1;
//     while(head->next!=NULL && count<=k){
//         count++;
//         head=head->next;
//     }
    

//     if(count<k)
//     return 1;
//     else
//     return 0;

// }
 

// Node* kReverse(Node* head, int k) {
//     // Write your code here.
//     //base case
//     if(head==NULL){
//         return head;
//     }

//     //for unchanged if k group se chota hua to
//     if(countchecker(head,k)){
//         return head;
//     }
   
//      //step 1 reverse 1st k nodes
//     int count=1;
//     Node*prev=NULL;
//     Node*curr=head;
//     Node*forward=NULL;
//          while( curr!=NULL && count<=k){
//         forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//         count++;
//         }

//     //step 2 : recursion dekh lega
//     if(forward !=NULL){
//         head->next=kReverse(curr,k);
//     }

//     //step 3 : return head of reversed list
//     return prev; 
// }


//loop detection using map 
/*
bool detectloop(Node*head){
    if(head==NULL){
        return false;
    }
    map<Node*,bool>visited;

    Node*temp=head;
    while(temp !=NULL){
        
        //cycle present h
        if(visited[temp]==true){
            return true;
        }

        visited[temp]=true;

        temp=temp->next;
    }
    //circular list nhi tha
    return false;
}

//floydd cycle detection algorithm
// T.C.=O(n)  and space =O(1)
Node* floyddetectloop(Node*head){
    if(head==NULL){
        return NULL;
    }

    Node*slow=head;
    Node*fast=head;

    while(slow!=NULL && fast!=NULL && slow!=fast){
        fast=fast->next
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;

        if(slow==fast){
            cout<<"present at"<<slow->dat<<endl;
            return slow;
        }
    }
    return NULL;
}


//begining/starting odf loop (using flooyd cycle detection help se)
Node* getstarting(Node*head){
    if(head==NULL){
        return NULL;
    }

    Node*intersection=floyddetectloop(head);
    Node*slow=head;

    while(slow !=intesection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow->data;
}

//remove loop from linklist (using floydd cycle detect alogo )
void removeloop(Node*head){
    if(head==NULL){
        return NULL:
    }
    node*startofloop=getstarting(head);
    Node*temp=startofloop;

    while(temp->next !=startofloop){
        temp=temp->next;
    }
    temp->next=NULL;
    return;
}
*/

//floydd cycle detection algo (detect loop in linklist then remove impoertant (for interview in product based))
// 3 question bante h 
//detect cycle in loop (3 tarike h sir ne 2 nata diye h baki h.w.)
//remove cycle in loop (5 tarike h h.w.)
//beginging /start node of loop in linklist







//for detect and remove both logic combine question(moderate level)
/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/

//for detect cyle 
// Node*floydd(Node* head){
//     if(head==NULL){
//         return NULL;
//     }
//     Node*slow=head;
//     Node*fast=head;

//     while(slow!=NULL && fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//         }
//         slow=slow->next;

//         if(slow==fast){
//             return slow;
//         }
//     }
//     return NULL;
// }

// //for finding start of loop
// Node*beginloop(Node*head){
//     if(head==NULL){
//         return NULL;
//     }

//     Node*intersection=floydd(head);
    
//     //agar loop na ho linklist mai to
//     if(intersection==NULL){
//         return NULL;
//     }
//     Node*slow=head;

//     while(slow!=intersection){
//         slow=slow->next;
//         intersection=intersection->next;
//     }
//     return slow;
// }

// Node *removeLoop(Node *head)
// {
//     // Write your code here.
//     if(head==NULL){
//         return NULL;
//     }

//     Node*point=beginloop(head);
    
//     //agar loop na ho 
//     if(point==NULL){
//         return head;
//     }

//     Node*temp=point;

//     while(temp->next !=point){
//         temp=temp->next;
//     }
//     temp->next=NULL;
//     return head;

// }



//circular loop h ya nhi check
// using map

// bool isCircular(Node* head){
//     // Write your code here.
//     if(head==NULL){
//         return true;
//     }

//     //map bana liya
//     map<Node*,bool>visited;

//     Node*temp=head->next;
//     visited[head]=true;
//     while(temp!=NULL && head!=temp){
//         if(visited[temp]==true){
//             return false;
//         }
//         visited[temp]=true;
//         temp=temp->next;
//     }
//     return temp==head;
    
// }


//using floydd detection algo

// Node* floydd(Node*head){
//     if(head==NULL){
//         return NULL;
//     }

//     Node*slow=head;
//     Node*fast=head;

//     while(slow!=NULL && fast !=NULL){
//         fast=fast->next;
//         if(fast !=NULL){
//             fast=fast->next;
//         }
//         slow=slow->next;

//         if(slow==fast){
//             return slow;
//         }
//     }
//     return NULL;
// }
// //for finding start of loop
// Node*beginloop(Node*head){
//     if(head==NULL){
//         return NULL;
//     }

//     Node*intersection=floydd(head);
    
//     //agar loop na ho linklist mai to
//     if(intersection==NULL){
//         return NULL;
//     }
//     Node*slow=head;

//     while(slow!=intersection){
//         slow=slow->next;
//         intersection=intersection->next;
//     }
//     return slow;
// }

// bool isCircular(Node* head){
//     // Write your code here.
//     if(head==NULL){
//         return true;
//     }


//     Node*temp=beginloop(head);
//     return temp==head;
    
// }




//Remove duplicates

// Remove duplicate in a sorted linklist
//for singly linklist

// Node*RDS(NOde*&head){
//   if(head==NULL  ){
//     return head;
//   }
//   Node*curr=head;
//   Node*temp=NULL;
//   while(curr !=NULL){
//     if((curr->next!=NULL)&& (curr->data ==curr->next->data)){
//         temp=curr->next;
//         curr->next=temp->next;
//         delete temp;
//     }
//     else{
//         curr=curr->next;
//     }
//   }
//   return head;
// }

//for dubly link list remove duplicate in  sorted linlist
// Node * removeDuplicates(Node *head)
// {
//     // Write your code here
//     if(head==NULL){
//         return head;
//     }
//     Node*curr=head;
//     Node*temp=NULL;

//     while(curr !=NULL){
//         if((curr ->next !=NULL)&&curr->data ==curr->next->data){
//             temp=curr->next;
//             curr->next=temp->next;
//              if (temp->next != NULL) { // check before accessing temp->next->prev
//                 temp->next->prev = curr;
//             }
//             delete temp;
//         }
//         else{
//             curr=curr->next;
//         }
//     }
//     return head;
// }



// Remove duplicate in a unsorted linklist(imp moderate level)
// sol1-> T.C : O(n2) : do loop laga lunga 
// sol2-> T.C : O(nlogn) : sort the linklist first then remove duplicated in sorted linklist 
// sol3-> T.C : O(n)  : using map 



// sol3.

// Node *removeDuplicates(Node *head)
// {
//     // Write your code here
//     if(head==NULL || head->next==NULL){
//         return head;
//     }

//     //using map
//     unordered_map<int,bool>visited;


//     Node*prev=head;
//     visited[prev->data]=true;


//     Node*curr=head->next;

//     Node*temp=NULL;
    
//     while(curr!=NULL){
//         if(visited[curr->data] !=true){
//             visited[curr->data]=true;
//             prev=curr;
//             curr=curr->next;
//         }
//         else{
//             //duplicate node
//             temp=curr;
//             curr=curr->next;
//             prev->next = curr;
//             delete temp;
            
//         }
        
//     }
//     return head;
// }



// leetcode 82. Remove Duplicates from Sorted List II
//approach : pahle maine normal duplicate emove kiye or sath mai ek map laga diya fir jab bool ture aaya fir se remove kar diya 


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//          map<int,bool>visited;
//         if(head==NULL){
//             return head;
//         }
//        ListNode*curr=head;
//        ListNode*temp=NULL;
//        while(curr!=NULL){
//         if((curr->next !=NULL)&&(curr->val== curr->next->val)){
//             visited[curr->val]=true;
//             temp=curr->next;
//             curr->next=temp->next;
//             delete temp;
//         }
//         else{
//             curr=curr->next;
//         }
//        }
//        ListNode*output=head;
//        ListNode*prev=NULL;
//        while(output !=NULL ){
//         if(visited[output->val]==true){
//             if(prev==NULL){
//                 temp=output;
//                 output=output->next;
//                 delete temp;
//                 head=output;
//             }
//             else{
//                 prev->next=output->next;
//             temp=output;
//             output=output->next;
//             delete temp;
//             }
            
//         }
//         else{
//             prev=output;
//             output=output->next;
//         }
//        }
//        return head;


//     }
// };


// leetcode: slove 203. Remove Linked List Elements(done)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//         if(head==NULL){
//             return NULL;
//         }

//         ListNode*prev=NULL;
//         ListNode*curr=head;
//         ListNode*temp=NULL;
//         while(curr !=NULL){
//             if(curr->val==val){
//                 temp=curr;
//                 if(prev !=NULL){
//                     prev->next=temp->next;
//                     curr=curr->next;
//                     delete temp;
//                 }
//                 else{
//                     curr=curr->next;
//                     head=curr;
//                     delete temp;
//                 }
                

//             }
//             else{
//                 prev=curr;
//                 curr=curr->next;
//             }
//         }
//         return head;
        
        
//     }
// };



//h.w.circular link list ko 2 half mai split karna h 
