#include <iostream>
#include<vector>
using namespace std;



// Check if Array Is Sorted and Rotated 

// bool checkok(vector<int>&arr2,int n)
// {
//  int count=0;
//  for(int i=1;i<n;i++){
//     //checking more then 1 pair nhi hona chaye (hum mod ka use bhi kar sakte the )
//     if(arr2[i-1]>arr2[i])
//     count++;
//  }
//  if(arr2[n-1]>arr2[0]){
//     count++;
//  }
//  //yaha hmne agar {1,1,1}case handle nhi kiya to es liye wrong answer aya ;
// //  return count==1;
//  return count<=1;//agar hnme sare case handle kar liye i.e, agar count ki value 0or 1 aae to return true ;
    
// }


// int main(){
//     vector<int>arr;
//     int n;
//     cout<<"Enter the size of arrray   "<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x=0;
//         cin>>x;
//         arr.push_back(x);
//     }
//     if(checkok(arr,n)){
//         cout<<"soretd and roated array h ";
//     }
//     else{
//         cout<<"Nhi h , sorted and rotated array";
//     }
// }












//sum of two array 234        5     999
//                  +6     +256    +999
//                =240     =361   =1998
// in case 1 array 1 size  >  array 2 size
// in case 2 array1 size   <   array 2 size
// in case 3 array 1 size  =  array 2 size (or carry bach jaye)

vector<int> reverse(vector<int>&temp){
    int s=0;
    int e=temp.size()-1;
    while(s<=e){
        swap(temp[s],temp[e]);
        s++;
        e--;
    }
    return temp;
}
void sumarr(vector<int>&arr1,int m,vector<int>&arr2,int n){
    vector<int>temp;
    int i=m-1;
    int j=n-1;
    int carry=0;
    while(i>=0 && j>=0){
        int sum=arr1[i]+arr2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        temp.push_back(sum);
        i--;
        j--;
    }

    //case1
    while(i>=0){
        int sum=arr1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        temp.push_back(sum);
        i--;

    }
    // case2
     while(j>=0){
        int sum=arr2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        temp.push_back(sum);
        j--;
        
    }
    // case3
    while(carry !=0){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        temp.push_back(sum);
    }

    reverse(temp);
    for(int i: temp){
        cout<<i<<"  ";
    
    }
    cout<<endl;
}
                    
int main(){
    vector<int>arr1;
    vector<int>arr2;
    int m,n;
    cout<<"Enter the size of arrray1   "<<endl;
    cin>>m;
    for(int i=0;i<m;i++){
        int x=0;
        cin>>x;
        arr1.push_back(x);
    } 
    cout<<"Enter the size of arrray   "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int x=0;
        cin>>x;
        arr2.push_back(x);
    } 
    sumarr(arr1,m,arr2,n);
    
}




