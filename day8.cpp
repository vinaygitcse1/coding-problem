#include<iostream>
#include<vector>
using namespace std;


//reverse the array at a point 
void reverseArray(vector<int> &arr , int m) {
    // Write your code here 
    int i=m+1;
    int j=arr.size()-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i:arr){
        cout<<i<<"  ";

    }
}

int main(){
    vector<int>arr;
    int n,m;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    for (int i =0;i<n;i++){
        int x=0;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"Enter the reverse position "<<endl;
    cin>>m;
    reverseArray(arr,m);

}