#include<iostream>
#include<vector>
using namespace std;


//reverse the array at a point 
// void reverseArray(vector<int> &arr , int m) {
//     // Write your code here 
//     int i=m+1;
//     int j=arr.size()-1;
//     while(i<=j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     for(int i:arr){
//         cout<<i<<"  ";

//     }
// }
// int main(){
//     vector<int>arr;
//     int n,m;
//     cout<<"enter the size of array"<<endl;
//     cin>>n;
//     for (int i =0;i<n;i++){
//         int x=0;
//         cin>>x;
//         arr.push_back(x);
//     }
//     cout<<"Enter the reverse position "<<endl;
//     cin>>m;
//     reverseArray(arr,m);

// }





//merge 2 sorted array 

//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//        int i=0,j=0,k=0;
//        vector<int>temp;
       
//        while(i<m && j<n){
//         if(nums1[i]<=nums2[j]){
//             temp.push_back(nums1[i]);
//             i++;
            
//         }
//         else{
//             temp.push_back(nums2[j]);
//             j++;
//         }
//        }
//         while(i<m){
//         temp.push_back(nums1[i]);
//         i++;
//         }
//         while(j<n){
//         temp.push_back(nums2[j]);
//         j++;
//        }

//         for(int i:temp){
//         cout<<i<<"  ";
//     }
    
 
// }

// int main(){
//     vector <int>nums1;
//     vector<int>nums2;
//     int n,m;
//     cout<<"enter the size of array1"<<endl;
//     cin>>m;
//     for (int i =0;i<m;i++){
//         int x=0;
//         cin>>x;
//         nums1.push_back(x);
//     }
//     cout<<"enter the size of array2"<<endl;
//     cin>>n;

//      for (int i =0;i<n;i++){
//         int x=0;
//         cin>>x;
//         nums2.push_back(x);
//     }
//     merge(nums1,m,nums2,n);


// }




//moves zeros 



// void moveZeroes(vector<int>& nums) {
//     // 1.st way (o(n2)complexity)
//         for(int i=nums.size()-1;i>0;i--){
//             for(int j=0;j<i;j++){
//                 if(nums[j]==0 && nums[j+1]!=0)
//                 swap(nums[j],nums[j+1]);
//             }
//         }

// 2.nd way (best way(O(n)complexity))
// int i=0;
//         for(int j=0;j<nums.size();j++){
//             if(nums[j]!=0){
//                 swap(nums[i],nums[j]);
//                 i++;
//             }
//         }
//         for(int i:nums){
//         cout<<i<<"  ";

//     }cout<<endl;
// }

// int main(){
//     vector<int>arr;
//     int n;
//     cout<<"enter the size of array & rotation "<<endl;
//     cin>>n;
//     for (int i =0;i<n;i++){
//         int x=0;
//         cin>>x;
//         arr.push_back(x);
//     }
//     moveZeroes(arr);
//     
// }







// //Rotate the array array 


//approach 1(o(n2)complexity)
//  void rotate(vector<int>& nums, int k) {
//         for(int i=0;i<k;i++){
//             int temp=nums[nums.size()-1];
//             for(int j=nums.size()-2;j>=0;j--){
//                 nums[j+1]=nums[j];
//             }
//             nums[0]=temp;
//         }
//         for(int i:nums){
//         cout<<i<<"  ";
//         }
//     }

//approach 2(o(n)complexity best way  )

//  void rotate(vector<int>& nums, int k) {
//         vector<int> temp(nums.size());
//         for(int i=0;i<nums.size();i++){
//         //cyclic way mai k position se shift karega 
//         temp[(i+k)%nums.size()]=nums[i];
//         }
//         //copy temp into nums vector
//         nums=temp;

//         for(int i:nums){
//         cout<<i<<"  ";
//         }
// }
// int main(){
//     vector<int>arr;
//     int n,m;
//     cout<<"enter the size of array & rotation "<<endl;
//     cin>>n>>m;
//     for (int i =0;i<n;i++){
//         int x=0;
//         cin>>x;
//         arr.push_back(x);
//     }
//     rotate(arr,m);
// }





