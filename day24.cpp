#include <iostream>
#include <queue>
#include<deque>
using namespace std;


//Queue 
//It follow FIFO (first in first out structure)
//push hmesha rear end se hota h , pop hmesha front end se hota h 




//Queue implemnetation through STL

// int main(){

//     //create a queue
//     queue<int>q;

//     //push
//     q.push(11);
//     q.push(15);
//     q.push(13);
    
//     cout<<"Front of queue is  : "<<q.front()<<endl;
//     cout<<"Size of queue is  :  "<<q.size()<<endl;
//     cout<<"Rear of queue is   : "<<q.back()<<endl;

//     cout<<"Pop one element "<<endl;
//     q.pop();

//     cout<<"Size of queue is :  "<<q.size()<<endl;


//     cout<<"Queue is empty  "<<q.empty()<<endl;

//     cout<<"Pop all element "<<endl;
//     q.pop();
//     q.pop();

//     cout<<"Queue is empty  : "<<q.empty()<<endl;

// }










//Queue implementation through  class

//two implemntation possible through array , through linklist
//arry implemtation of queue

/*
class Queue {

    int *arr;
    int size;
    int qfront;
    int rear;

public:
    Queue() {
        //  Constructor
        size=100001;
        arr=new int[size];
        qfront=0;
        rear=0;

    }

    /*----------------- Public Functions of Queue -----------------*/
/*
    bool isEmpty() {
        if(qfront==rear){
            return 1;
        }
        else{
            return 0;
        }
    }

    void enqueue(int data) {
        // enqueue() 
        //whene queue is full
        if(rear==size){
            return ;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        // dequeue()
        //when queue is empty
        if(qfront==rear){
            return -1;
        }
        else{
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear){
                qfront=0;
                rear=0;
            }
            return ans;
        }
    }

    int front() {
        if(qfront==rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
        
    }
};*/






//linklist implementaion (h.w.)













//circular queue

/*
#include <bits/stdc++.h> 
class CircularQueue{
    int *arr;
    int size;
    int front;
    int rear;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size=n;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        //Queue is full
        if((front ==0 && rear ==size-1)  || rear==(front-1)%(size-1) ){
            return false;
        }
        else if(front==-1){
            //first element insertion
            front=0;
            rear=0;
            arr[rear]=value;
        }
        else if(rear==size-1  && front !=0){
            //to maintain cyclecity
            rear=0;
            arr[rear]=value;
        }
        else{
            //normal case
            rear++;
            arr[rear]=value;
        }
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // queue is empty
        if(front ==-1){
            return -1;
        }
        int ans=arr[front];
        if(front==rear){
            //single element remove
            front =-1;
            rear=-1;
        }
        else if(front==size-1){
            //to maintain cyclicity
            front=0;
        }
        else{
            //Normal case
            front++;
        }
        return ans;
    }
};
*/




//Input restricted queue
//input possible only rear end and deletion avavliable in both front and rear end (push_back, pop_front, pop_back)

// Output restricted queue
//input possible in both end front and rear and  deletion only front end(push_front, push_back, pop_front)


//doubly ended queue
//push and pop in both end (front and rear dono se)
//push_front,push_back,pop_front, pop_back

//Note : Doubly ended queue ke help se aap  stack ko bhi implement kar sakte h (important)
//Doubly ended ki basic application aapki cpu scheduling ke ander , process scheduling ke ander hoti h






//STL of doubly ended queue
/*
int main(){
    deque<int>d;
    
    d.push_front(10);
    d.push_back(20);


    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_front();

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_back();

    cout<<"Queue is empty or not  "<<d.empty()<<endl;

}
*/










//dequeue implementation manually
/*
#include <bits/stdc++.h> 
class Deque
{
    int *arr;
    int size;
    int front;
    int rear;
   
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size=n;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        //queue is full
        if(isFull()){
            return false;
        }
         //first element insertion
        if(front==-1){
            front=0;
            rear=0;
            arr[front]=x;
        }
        else if(front==0 && rear !=size-1){
            //to maintain cyclicity
            front=size-1;
            arr[front]=x;
        }
        else{
            front--;
            arr[front]=x;
        }
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        //queue is full
        if(isFull()){
            return false;
        }
        //first element insertion
        if(front==-1){
            front=0;
            rear=0;
            arr[rear]=x;
        }
        else if(rear==size-1 && front !=0){
            //to maintain cyclicity
            rear=0;
            arr[rear]=x;
        }
        else{
            //normal case
            rear++;
            arr[rear]=x;
        }
        return true;

    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {   //Queue is empty
        if(isEmpty()){
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
         if(front==rear){
            //single element deletion
            front=-1;
            rear=-1;
        }
        else if(front==size-1){
            //to maintain cyclicity
            front=0;
        }
        else{
            front++;
        }
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        //Queue is empty
        if(isEmpty()){
            return -1;
        }
        int ans=arr[rear];
        arr[rear]=-1;
        if(front==rear){
            //single element deletion
            front=-1;
            rear=-1;
        }
        else if(rear==0){
            //to maintain cyclicity
            rear=size-1;
        }
        else{
            //Normal case
            rear--;
        }
        return ans;

    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        //queue is empty
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        //queue is empty
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[rear];
        }
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front==-1){
            return true;
        }
        else{
            return false;
        }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        //queue is full
        if((front==0 && rear==size-1) || (front !=0 && rear==(front-1)%(size-1))){
            return true;
        }
        else{
            return false;
        }
    }

};
*/


