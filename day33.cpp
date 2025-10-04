#include <iostream>
using namespace std;

// Heaps in C++
//Heap is the data structure , this is a complete binary tree, that comes with the heap order property

//Max heap:
// parent node data always greater than his childrens

//Min heap:
//parent node data alwys smaller than his children


//Innsertion in heap
//approach: insert at end and take it to its correct position (check its parent to root agar bich mai hi satisfy ho gya to ruk jao )
//T.C. O(log n)
class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0]=-1;
        size=0;
    }


    void insert(int data){

        //insert at end
        size=size+1;
        int index=size;
        arr[index]=data;

        //ab us data ko correct postion par leke jana
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }

        }
    }




    //Deltion in heap
    //approach: swap 1st node and last node, remove last node, then propagate root nodes to its correct position 
    //T.C. O(log n )

    void deletion(){

        if(size==0){
            cout<<"Nothing to delete"<<endl;
            return;
        }

        //swap root and last element 
        arr[1]=arr[size];
        

        //remove last node
        size=size-1;

        //propagate root nodes to its correct position 
        int i=1;
        while(2*i < size){
            int left=2*i;
            int right=2*i+1;

            //largest child h to niklo
            int largest_child=left;

            if( right<=size && arr[left]<arr[right]){
                largest_child=right;

            }


            if(arr[i]<arr[largest_child]){
                swap(arr[i],arr[largest_child]);
                i=largest_child;
            }
            else{
                return;
            }
        }
        
    }
    
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};



int main(){
    heap h;
    
    h.insert(60);
    h.insert(50);
    h.insert(70);
    h.insert(30);
    h.insert(20);
    h.insert(10);

    h.print();


    h.deletion();

    h.print();

}