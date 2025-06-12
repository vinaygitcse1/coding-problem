#include<iostream>
using namespace std;

// selection sort
// void selectionSort(vector<int>& arr, int n)
// {   
//     int pointer1;

//     // Write your code here.
//     for(int i=0;i<n-1;i++){
//         pointer1=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[pointer1]>=arr[j]){
//                 pointer1=j;
//             }
//         }
//         swap(arr[i],arr[pointer1]);
//     }
//     return ;
// }

//usecase: jab array/list/vector  ka size chota ho , or sorting chlana ho tab kam karta h 




//Bubble sort 
// void BubbleSort(int arr[],int n){
//  // Write your code here.
//      for(int i=n-1;i>=0;i--){
//         bool flag=1;
//         for(int j=0;j<i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 flag=0;
//             }

//         }
//         if(flag){
//                 return;
//             }
//     }

//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }

// }

// int main(){
//     int arr[7]= {4,5,6,7,1,2,3};
//     BubbleSort(arr,7);

// }

//use case: har i th round mai hm ith largest emenent ko uske right place par pahucha dete h 



//insertion sort 
void Insert_srt(int arr[],int n){
    
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }

    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    
}

int main(){
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    Insert_srt(arr,10);
}