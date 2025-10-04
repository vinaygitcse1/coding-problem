#include<iostream>
#include <queue>
using namespace std;

    //complete binary tree mai leaf node lies in between N/2+1 se N tak ;
    //heapyfy algo (approach):
    // hum size/2 se 1 tak chalge loop beacuse leaft is already heap;
    // har element ko uski sahi position par pahuvhate chalege 

    //time complexity of building a heap is O(n) using heapify algo
/*
void heapify(int arr[], int size, int index){
    int left_child=2*index;
    int right_child=2*index+1;

    int largest=index;
    if(left_child<=size && arr[largest]<arr[left_child]){
        largest=left_child;

    }
    if(right_child<=size && arr[largest]<arr[right_child]){
        largest=right_child; 
    }


    if(largest !=index){
        swap(arr[index],arr[largest]);

        heapify(arr, size, largest);

    }
    else{
        return;
    }
}
*/
// /*min heapify */
/*
void heapify(vector<int>&arr,int size, int index ){
    int left=2*index+1;
    int right=2*index+2;
    int smallest=index;


    if(left< size && arr[smallest]>arr[left]){
        smallest=left;
    }
    if(right<size && arr[smallest]>arr[right]){
        smallest=right;
    }

    if(smallest !=index){
        swap(arr[index],arr[smallest]);
        heapify(arr,size, smallest);

    }
    else{
        return;
    }
}
vector<int> buildMinHeap(vector<int> &arr)
{
    int size=arr.size();
    for(int i=size/2-1;i>=0;i--){
        heapify(arr, size, i);

    }
    return arr;
}*/







//Heap sort
//approach :
//step 1: Build heap(heap creation)
//step 2: swap first and last element
//step 3: use logic of heap sort
/*

void heapsort(int arr[], int size){

        while(size>1){
        //step 1 : swap
        swap(arr[1], arr[size]);
        size--;

        //step 2 
        heapify(arr, size, 1);

    }
}

int main(){
    int arr[10]={-1,10,50,70,100,30,90,41,35,19};
    int size=9;

    for(int i=size/2; i>0;i--){
        heapify(arr, size, i);
    }

    cout<<endl;

    cout<<"Heap creation(heapify)"<<endl;

    for(int i=1;i<=size;i++){
        cout<<arr[i]<<"  ";

    }


    cout<<endl;

    cout<<"heap sort "<<endl;
    heapsort(arr, size);


    for(int i=1;i<=size;i++){
        cout<<arr[i]<<"  ";

    }



}

*/



















//max heap using stl (priority queue)

int main(){
    priority_queue<int> pq;

    //insert in max heap
    pq.push(10);
    pq.push(20);
    pq.push(90);
    pq.push(15);
    pq.push(25);


    //so top par max heap par maximum element rhta h 
    cout<<"Element at top "<<pq.top()<<endl;


    //deletion of root
    pq.pop();

    cout<<"Now max element ater root deletion  "<<pq.top()<<endl;


    //size of heap
    cout<<"Size of max heap  "<<pq.size()<<endl;

    //checking empty heap or not
    cout<<"Heap is Empty or not "<<pq.empty()<<endl;
















    //creation of min heap

    priority_queue<int, vector<int>, greater<int>>minheap;

    //insert in min heap
    minheap.push(10);
    minheap.push(20);
    minheap.push(90);
    minheap.push(15);
    minheap.push(25);

    //so top par min heap par minimum element rhna chaye 
    cout<<"Element at top "<<minheap.top()<<endl;

    //deletion of root
    minheap.pop();

    cout<<"Now max element ater root deletion  "<<minheap.top()<<endl;


    //size of heap
    cout<<"Size of max heap  "<<minheap.size()<<endl;

    //checking empty heap or not
    cout<<"Heap is Empty or not "<<minheap.empty()<<endl;

}




