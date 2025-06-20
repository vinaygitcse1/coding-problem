#include <iostream>
#include <vector>
using namespace std;

/*int BinSearch(int arr[],int size,int key){
    int s=0,e=size-1;
    int mid=(s+e)/2;
    //Optimed version (must use) taki INT_MAX  se bahar na chle aye 
    //int mid=s+(e-s)/2
    while(s<=e){

        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
        //Optimed version (must use)
        // mid=s+(e-s)/2
    }
    return -1;
}

int main(){
    int size,key;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    cout<<"enter the array elements"<<endl;

    int arr[10];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Enter the key to search"<<endl;
    cin>>key;

    int ans=BinSearch(arr,size ,key);
    cout<<ans;

}*/


//Binary search
// condition: sorted array hona must h (elements should be in monotonic functions)




//Binary search interview problems 
//First and Last Position of an Element In Sorted Array
/*
void First_and_last(int arr[],int size, int key){
    int start=0,s=0;;
    int end =size-1, e=size-1;
    int mid=start+(end-start)/2,  m=s+(e-s)/2;
    int ans =-1,a=-1;
    
//first
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    cout<<ans<<"  ";
//last
        while(s<=e){
        if(arr[m]==key){
           a=m;
           s=m+1;
        }
        else if(key>arr[m]){
            s=m+1;
        }
        else{
            e=m-1;
        }
        m=s+(e-s)/2;
    }
    cout<<a;

 }

int main(){
    int arre[24]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2};
    int arro[11]={10,11,12,12,12,12,15,16,19,21,21};
    int key,size=12;
    cout<<"Enter the Key"<<endl;
    cin>>key;

    First_and_last(arro,size,key);
    
}*/



//Total no of occerance

/*
void Total_occ(int arr[],int size, int key){
    int start=0,s=0;;
    int end =size-1, e=size-1;
    int mid=start+(end-start)/2,  m=s+(e-s)/2;
    int ans =-1,a=-1;
    
//first
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    
//last
        while(s<=e){
        if(arr[m]==key){
           a=m;
           s=m+1;
        }
        else if(key>arr[m]){
            s=m+1;
        }
        else{
            e=m-1;
        }
        m=s+(e-s)/2;
    }
    
//total occ
cout<<"Total occ. of  "<<key <<" is "<<"  :   "<<a-ans+1;

 }

int main(){
    int arre[24]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2};
    int arro[11]={10,11,12,12,12,12,15,16,19,21,21};
    int key,size=24;
    cout<<"Enter the Key"<<endl;
    cin>>key;

    Total_occ(arre,size,key);
    
}*/



//peak element in a mountain array (i.e. max element niklna 12321 so o/p ; 3 es traha  ke question ka)

// approach 1: Linear search 

// approach 2 : Binary (Important question)
/*
void peak(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<end){
            if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }
            else{
                end=mid;
            }
       
        mid=start+(end-start)/2;
        }
        cout<<"Peak element at the location   :   "<<start;

    }
    int main(){
        int arr[]={1,2,3,4,5,6,7,9,6,5,4,3,0};
        int size;
        cout<<"Enter the size  "<<endl;
        cin>>size;

        peak(arr,size);
    }*/



//find pivot in an array 
/*
void pivot(int arr[],int size){
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;

    while(start<end){

        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
        
    }
    cout<< "The Pivot elemenet is   :   "<<arr[start];

}

int main(){
    int arr[9]={8,9,1,2,3,4,5,6,7};

    pivot(arr,9);

}*/


//find key in roted array
/*
int Bin_Search2(int arr[],int st,int size,int key){
    int start=st;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return  mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int Bin_Search(int arr[],int size,int key){
    int start=0;
    int end=size;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            cout<<mid;
            return  mid;
            
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int pivot_search(int arr[],int size){

    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;    
}


int main(){
    int arr[8]={3 ,5 ,7, 8, 9 ,10, 11 ,2 };
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;


    int point=pivot_search(arr,8);
    cout<<point;
    if(max(Bin_Search(arr,point-1,key),Bin_Search2(arr,point,10,key))!=-1)
    cout<<"Present at location   :   "<<max(Bin_Search(arr,point-1,key),Bin_Search2(arr,point,10,key));
    else
    cout<<"Not Present";

}*/




//second way to do this 

/*int Bin_Search(int arr[],int s,int e,int  key){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return  mid;  
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

 int pivot_search(int arr[],int size){

    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;    
}
int main(){
    int arr[8]={3 ,5 ,7, 8, 9 ,10, 11 ,2 };
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;

    int point =pivot_search(arr,8);

//Binary search on second line
    if(key>=arr[point]  &&  key<=arr[7])
    cout<<Bin_Search(arr,point,7,key);
    else
//binary search on first line 
    cout<<Bin_Search(arr,0,point-1,key);
}*/



//square root using binary search 
/*
int floorSqrt(int n)
{
    
    int start=0;
    int end=n;
    int ans=0;

    int mid=start+(end-start)/2;

    while(start<=end){
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
        mid=start+(end-start)/2;
        
    }
    return ans;

}
int main(){
    int n;
    cout<<"Enter the number   "<<endl;
    cin>>n;

    cout<<floorSqrt(n);
}*/



//square root with more precision

/*
int floorSqrt(int n)
{
    
    int start=0;
    int end=n;
    int ans=0;

    int mid=start+(end-start)/2;

    while(start<=end){
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
        mid=start+(end-start)/2;
        
    }
    return ans;

}
double morePrecision(int n, int tempsol,int p_count){
    double ans=tempsol;
    double fact=1;
    for(int i=1;i<=p_count;i++){
        fact=fact/10;
        for(double j=ans;j*j<n;j=j+fact){
            ans=j;
        }
        
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number  :  "<<endl;
    cin>>n;
    int p_count;
    cout<<"Enter the presion count:    "<<endl;
    cin>>p_count;

//pichle wale jaisa
    int tempsol=floorSqrt(n);
//for more precison 
    cout<<morePrecision(n,tempsol,p_count);
}*/










// Top question : Book allocation problem
/*
bool Ispossible(vector<int>& arr, int n, int m,int mid){
    int studentCount=1;
    int PageSum=0;

    for(int i=0;i<n;i++){
        if(PageSum+arr[i]<=mid){
            PageSum+=arr[i];

        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            PageSum=arr[i];
        }
    }
    return true;

}


int findPages(vector<int>& arr, int n, int m) {

    //if no of student jada ho jaye no fo books se
    if(m > n) return -1;

    int start=0;

    int sum=0;
    int ans=-1;

// sum of all book pages 
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }

    int end=sum;

    int mid=start+(end-start)/2;


    while(start<=end){

        //cheking that the ye allocation possible h ki nhi agar h to ans mai store kiya or end ko piche kiya kyu ki hmko minimum niklna h is liye 
        if(Ispossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }

        mid=start+(end-start)/2;
    }
    return ans;
}*/


//painter partition problem same as book aloocation problem 
/*bool IsPossible(vector<int> &boards, int k, int mid){
    int Painter_count=1;
    int board_len=0;

    for(int i=0;i<boards.size();i++){
        if(board_len+boards[i]<=mid){
            board_len+=boards[i];
        }
        else{
            Painter_count++;
            if(Painter_count>k || boards[i]>mid){
                return false;
            }
            board_len=boards[i];
        }
    }
    return true;
}




int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    // if(k>boards.size())
    // return -1;

    int start=0;
    int sum =0;
    for(int i=0;i<boards.size();i++){
        sum =sum+boards[i];
    }
    int end=sum;

    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(IsPossible(boards,k,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }

        mid=start+(end-start)/2;
    }
    return ans;

}*/




//aggressive cow problem 
/*
bool Possible(vector<int> &stalls, int k, int mid){
    int cowCount=1;
    int position=stalls[0];

    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-position>=mid){
            cowCount++;
            if(cowCount==k){
            return true;}
            position=stalls[i];
        }
    }
    return false;

}

int aggressiveCows(vector<int> &stalls, int k)
{
   
    // maine array ko sort kar liya 
    sort(stalls.begin(),  stalls.end());

    int start=0;
    int maxi=-1;
    int ans=-1;

    for(int i=0;i<stalls.size();i++){
        maxi=max(maxi,stalls[i]);
    }
    int end=maxi;

    int mid=start+(end-start)/2;

    while(start<=end){
        if(Possible(stalls,k,mid)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }

        mid=start+(end-start)/2;
    }
    return ans;
}*/