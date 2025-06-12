#include <iostream>
#include <vector>
using namespace std;

//Array 
/*  similar kind of item
    contiguous loacation
    access through index  
    array ke case main hm base address pass karte h (most imp point)
    i.e, agar hm kuch uodate karte h to actual array mai uodate hoga so savdhan */


// void PrintArray(int arr[],int size){
//     cout<<"Printing the array"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<"  ";
//     }
// }
// int main(){
//     //declare 
//     int num[10];

//     //intilaization all location of array[10] with zero
//     int array[10]={0};

//     //size nikle ka tarika
//     int size=sizeof(array)/sizeof(int);

//     //arrray pass karne ka tarika
//     PrintArray(array,size);

//     //accesing the array directly
//     cout<<array[3];
// }


//h.w.: initialization all location with any number;






// maximum - minimum find 


// void MaxMin(int arr[],int size){
//     int max=INT_MIN;
//     int min=INT_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         if(arr[i]<min){
//             min=arr[i];
//         }
//      predefined for max min in C++
//      a=max(a,arr[i]);//for maximum
//      b=min(b,arr[i]);//for minimum
//     }
//     cout<<"Max is   "<<max<<endl;
//     cout<<"Min is   "<<min;
// }

//  int main(){
//     int arr[10];
//     for(int i=0;i<10;i++){
//         cout<<"Enter the "<<i+1<<" element"<<endl;
//         cin>>arr[i];
//     }
//     MaxMin(arr,10);
// }




//sum of all element in array


// int SumArray(int arr[],int size){
//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum=sum+arr[i];
//     }
//     return sum;
// }
//  int main(){
//     int size;
//     cout<<"Enter Size of array"<<endl;
//     cin>>size;
//     int arr[10];
//     for(int i=0;i<size;i++){
//         cout<<"Enter the "<<i+1<<" element"<<endl;
//         cin>>arr[i];
//     }
//     cout<<SumArray(arr,size);    
// }



//Linear Search

// int LinearSearch(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//         if(key==arr[i])
//         return i;
//     }
//     return -1;  
// }
//  int main(){
//     int size,key;
//     cout<<"Enter Size & Key of array"<<endl;
//     cin>>size>>key;

//     int arr[10];
//     for(int i=0;i<size;i++){
//         cout<<"Enter the "<<i+1<<" element"<<endl;
//         cin>>arr[i];
//     }
//     int index=LinearSearch(arr,size,key);
//     if(index==-1) 
//     cout<<"Key Not Present In Array"<<endl;
//     else 
//     cout<<"Key at index  "<<index<<endl;
// }



//Reverse an array 

// void Rev(int arr[],int size){
//     int i=0;
//     int j=size-1;

//     while(i<=j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
// }
//  int main(){
//     int size;
//     cout<<"Enter Size of array"<<endl;
//     cin>>size;
//     int arr[10];
//     for(int i=0;i<size;i++){
//         cout<<"Enter the "<<i+1<<" element"<<endl;
//         cin>>arr[i];
//     }
//     Rev(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<"  ";
//     }
// }



// swap alternate problem


// void SwapAlternate(int arr[],int size){
//     int i=0,j=1;
//     while(i<size && j<size){
//         swap(arr[i],arr[j]);
//         i=i+2;
//         j=j+2;
//     }
//     //print array
//       for(int i=0;i<size;i++){
//         cout<<arr[i]<<"  ";
//     }
// }
//  int main(){
//     int size;
//     cout<<"Enter Size of array"<<endl;
//     cin>>size;
//     int arr[10];
//     for(int i=0;i<size;i++){
//         cout<<"Enter the "<<i+1<<" element"<<endl;
//         cin>>arr[i];
//     }
//     SwapAlternate(arr,size);

    
//  }




// findUnique element

// int findUnique(int *arr, int size)
// {
//     //Write your code here
//     int a=0;
//     for(int i=0;i<size;i++){
//         a=a^arr[i];
//     }
//     return a;
// }
//  int main(){
//     int size;
//     cout<<"Enter Size of array"<<endl;
//     cin>>size;
//     int arr[10];
//     for(int i=0;i<size;i++){
//         cout<<"Enter the "<<i+1<<" element"<<endl;
//         cin>>arr[i];
//     }
//     int ans=findUnique(arr,size);
//     cout<<ans;
//  }
    

//Unique no of occrance (leet code)
// h.w.(1207)



// Find duplicates 
// int findDuplicate(int arr[],int size){
//     int a=0;
//     //Xoring all araay element and and [1,n-1] tak bhi xor kar diya hmne sabki occrance 2 bar kar di or repetaed element ki occurance 3 bar kar di
//     for(int i=0;i<size;i++){
//         a=a^i^arr[i];
//     }
//     return a;
// }

//  int main(){
//     int size;
//     cout<<"Enter Size of array"<<endl;
//     cin>>size;
//     int arr[10];
//     for(int i=0;i<size;i++){
//         cout<<"Enter the "<<i+1<<" element"<<endl;
//         cin>>arr[i];
//     }
//     int ans=findDuplicate(arr,size);
//     cout<<ans;
//  }


// h.w.:Find all duplicacy in array (442 Codestudio)


//intersection of two sorted array 
//Best approach(merge sort way)
// int main(){
//     int arr1[10]={1,2,3,4,5,6,7,8,9,10};
//     int arr2[10]={5,6,7,8,10,11,12,13,14,15};
//     vector<int> arr3;

//     int i=0,j=0,k=0;
//     while(i<10 && j<10)
    
//     if(arr1[i]<arr2[j]){
//         i++;  
//     }
//     else if(arr1[i]>arr2[j]){
//         j++;  
//     }
//     else{
//         arr3.push_back(arr1[i]);
//         i++;
//         j++;
 
//     }
//     // print array
//     for(int i=0;i<arr3.size();i++){
//         cout<<arr3[i]<<"  ";
//     }
// }


//1.st approach(bruteforce) of intersection 
	// for(int i=0;i<n;i++){
    //     int element=arr1[i];
    //     for(int j=0;j<m;j++){
    //         if(element==arr2[j]){
    //             arr3.push_back(element);
    //             arr2[j]=-2;
    //             break;
    //         }
    //     }
    // }
    // return arr3;




    //pair sum 
//     vector<vector<int>> pairSum(vector<int> &arr, int s){
//    // Write your code here.
//    vector<vector<int>> ans;
//    for(int i=0;i<arr.size();i++){
//       for(int j=i+1;j<arr.size();j++){
         
//          if((arr[i]+arr[j])==s){

//          vector<int> temp;
//          temp.push_back(min(arr[i],arr[j]));
//          temp.push_back(max(arr[i],arr[j]));
//          ans.push_back(temp);
//          }

//       }
      
//    }
//    sort(ans.begin(),  ans.end());
//       return ans;
// }


//triplete sum (h.w.) bas 2
// ke jagah 3 loop laga diya hmne 



//sort 0 1 in array 

// int main(){
//     int arr[]={1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0};
//     int i=0, j=15;
//     while(i<=j){
//         if(arr[i]==0){
//             i++;
//         }
//         if(arr[j]==1){
//             j--;
//         }
//         if(arr[i]!=0 && arr[j]!=1){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
//     for(int i=0;i<16;i++){
//         cout<<arr[i]<<"  ";
//     }
// }




//sort 0 1 2 (h.w.)












