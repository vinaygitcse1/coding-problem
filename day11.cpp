#include <iostream>
#include<vector>
using namespace std;

//Linear Search in 2D array
bool isPresent( int arr [][4] , int target ,int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(target==arr[i][j])
            return 1;
        }
    }
    return 0;
}


//RowSum 
void Rowsum(int arr[][4],int row ,int col){
    
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];

        }
        cout<<sum<<"  ";
    }
    cout<<endl;
}


//ColSum
void Colsum(int arr[][4] ,int row ,int col){
    for(int j=0;j<col;j++){
        int sum=0;
        for(int i=0;i<row;i++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<"  ";
    }
    cout<<endl;
}


//Largest Sum Problem
void LargestRow(int arr[][4],int row,int col){
    int max=0,rowNo=0;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];

        }
        if(max<sum){
            max=sum;
            rowNo=i;
        }
        
    }
    cout<<"Maximum row sum is  :  "<<max<< endl;
    cout<< "Index at which max row sum present    :  "<<rowNo+1<<endl;
}


// Wave print
// (1st way)
void WavePrint(int arr[][4],int row,int col){
    int i=0;
    for(int j=0;j<col;j++){
        if(i==0){
        while(i<row){
            cout<<arr[i][j]<<"  ";
            i++;
        }
    }
    else{
        while(i>0){
            cout<<arr[i-1][j] <<"  ";
            i--;
        }
    }
    }
}

//(2nd way)

/*void WavePrint(int arr[][4],int row,int col){
    for(int j=0;j<col;j++){
        if(j%2==0){
            for(int i=0;i<row;i++){
                cout<<arr[i][j]<< "   ";
            }
        }
        else{
            for(int i=row-1;i>=0;i--){
                cout<<arr[i][j]<< "   ";
            }

        }
    }
}*/


//SpiralPrint(leetcode 54 )
vector<int> SpiralPrint(int matrix[][4],int row,int col){
  
        vector<int> temp;

        int count = 0;
        int total = row * col;

        // index intialization
        int firstrow = 0;
        int firstcol = 0;
        int endrow = row - 1;
        int endcol = col - 1;

        while (count <total) {

            // print starting row
            for (int i = firstcol; count <total && i <= endcol; i++) {
                temp.push_back(matrix[firstrow][i]);
                count++;
            }
            firstrow++;
            

            // print ending column
            for (int i = firstrow; count <total && i <= endrow; i++) {
                temp.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;
            

            // print ending row
            for (int i = endcol; count <total && i >= firstcol; i--) {
                temp.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;
        

            // print starting column
            for (int i = endrow; count <total && i >= firstrow; i--) {
                temp.push_back(matrix[i][firstcol]);
                count++;
            }
            firstcol++;
            
        }
        return temp;
        
    }




//Binary Search in 2D array
bool BinSearch(int arr[][4],int row, int col,int key){
    int start=0;
    int end=row*col-1;

    int mid=start+(end-start)/2;

    while(start<=end){
        int element=arr[mid/col][mid%col];
        if(element==key)
        return 1;
        else if(element>key)
        end=mid-1;
        else
        start=mid+1;

        mid=start+(end-start)/2;
    }
    return 0;
}

//Binary Search (when row and col both sorted) 
bool searchMatrix(int matrix[][4], int row ,int col, int target) {
        

        int rowIndex=0;
        int colIndex=col-1;

        //Yaha Binary search ka search space kam karne  wala logic lag rha h 

        while(rowIndex<row && colIndex>=0){
            int element=matrix[rowIndex][colIndex];
            if(target==element)
            return 1;
            else if(target<element)
            colIndex--;
            else
            rowIndex++;
        }
        return 0; 
    }




int main(){

    //Creation of 2D array
    // visualization in 2d format but store always in 1d arry
    
    // 1st way to taking input
    // int arr[3][4]={10,11,12,13,14,15,16,17,18,19,20,21};

    //2nd way
    // int arr2[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    //3rd way
    // input lena cin>>arr[i][j]; (row wise)
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j =0;j<4;j++){
            cin>>arr[i][j];
        }
    }


    //input lena cin>>arr[i][j]; (col wise)
    /*for(int j=0;j<4;j++){
        for(int i =0;i<3;i++){
            cin>>arr[i][j];
        }
    }*/


    //output dena cout<<arr[i][j];
    for(int i=0;i<3;i++){
        for(int j =0;j<4;j++){
            cout<<arr[i][j] <<"  ";
        }
        cout<<endl;
    }

    //Linear search in 2D array
    /*cout<<"Enter the element to search"<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"Not Present"<<endl;
    }
    */




    //Row wise sum problem
    //Rowsum(arr,3,4);



    //col wise sum problem
    //Colsum(arr, 3,4);



    //Largest Row sum Problem
    //LargestRow(arr,3,4);



    //WavePrint Problem
    //WavePrint(arr,3,4);



    //Spiral Print Problem (important amazon)
    // vector<int> ans=SpiralPrint(arr,3,4);
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i] << "  ";
    // }




    //h.w. Rotate image (leet code 48)



    //Binary Search in 2D array
    // (Leetcode 74)
    // if(BinSearch(arr,3,4,15))
    // cout<<"Element is Present"<<endl;
    // else
    // cout<<"Not Present";
    

    //Binary Search 2D part 2 (leetcode 240 no.)
    if(searchMatrix(arr,3,4,41))
    cout<<"Element is Present"<<endl;
    else
    cout<<"Not Present";
    

}


