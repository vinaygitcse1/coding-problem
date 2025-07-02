#include<iostream>
#include<vector>
using namespace std;

void rev(int i,int j, string& s){
    //base case
    if(i>j){
        return ;
    }

    //solving 1 case
    swap(s[i],s[j]);
    i++;
    j--;

    //r.c
    rev(i,j,s);

}




bool palindrome(string &s,int i,int j){

    //base case
    if(i>j)
    return 1;

    //solve 1 case
    if(s[i] !=s[j] ){
        return 0;
    }
    //r.c
    return palindrome(s,i+1,j-1);
}




//Brute force
int power(int a, int b){
    //base case;
    if(b==0)
    return 1;

    //r.c
    return  a*power(a,b-1);
}




//Optimized 
int powerop(int a, int b ){
    if(b==0)
    return 1;
    if(b==1)
    return a;

    //recrsive call
    int ans=powerop(a,b/2);


    if(b&1){
        //for odd b
        return a*ans*ans;
    }
    else{
        //for even b
        return ans*ans;
    }
}




void Bubblesort(int arr[],int n){
    //base case
    //array has 1 element  or 0 elemnt (already soretd)
    if(n==1 ||n==0)
    return ;

    //solving 1 case
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //r.c
    Bubblesort(arr,n-1);
       
}


void Merge(int arr[],int start, int end){

    int mid=(start+end)/2;

    // length of arrays
    int length1=mid-start+1;
    int length2=end-mid;

    //make two temporary array
    int *a=new int[length1];
    int *b=new int[length2];

    //copy values
    int mainArrayIndex=start;

    for(int i=0;i<length1;i++){
        a[i]=arr[mainArrayIndex++];
    }

    mainArrayIndex=mid+1;
     for(int i=0;i<length2;i++){
        b[i]=arr[mainArrayIndex++];
    }
    
//merge sorted array
    int i=0;int j=0;
    mainArrayIndex=start;

    while(i<length1 && j<length2)
    if(a[i]<=b[j]){
        arr[mainArrayIndex++]=a[i++];
    }
    else{
        arr[mainArrayIndex++]=b[j++];
    }

    while(i<length1){
        arr[mainArrayIndex++]=a[i++];
    }
    while(j<length2){
        arr[mainArrayIndex++]=b[j++];
    }
    delete []a;
    delete[]b;
}

void MergeSort(int arr[],int start,int end){
    //base case
    if(start>=end){
        return;
    }
    int mid=(start+end)/2;


    //left part sort karna
    MergeSort(arr,start,mid);


    //right part sort karna
    MergeSort(arr,mid+1,end);

    //merge the array
    Merge(arr,start,end);

}

int partition(int arr[],int start,int end){
    int pivot=arr[start];
    int count =0;
    for(int i=start+1;i<=end;i++){
        if(pivot>=arr[i]){
            count++;
        }
    }

    //place pivot at right place 
    int pivotIndex=start+count;
    swap(arr[pivotIndex],arr[start]);



    int i=start;
    int j=end;

    while(i<pivotIndex && j>pivotIndex){

        while(arr[i]<pivot){
            i++;
        }
        while( arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;

}



void QuickSort(int arr[],int start, int end){

    //base case
    if(start>=end){
        return;
    }
    

    //partion karege 
    int index=partition(arr,start,end);

    //left sub aaray sort
    QuickSort(arr,start,index-1);

    //right sub aary sort
    QuickSort(arr,index+1,end);

}




void subset(vector<int>arr,vector<int>output,int index,vector<vector<int>>&ans){
    
    //base case
    if(index>=arr.size()){
        ans.push_back(output);
        return;
    }

    //exclude
    subset(arr,output,index+1,ans);

    //include
    int element =arr[index];
    output.push_back(element);
    subset(arr,output,index+1,ans);
}

int main(){
    string s="sssaasss";
    int j=s.length();

    //reverse the string through recursion
    // rev(0,j-1,s);
    //cout<<s;


    //checking palindrome
    //cout<<palindrome(s,0,s.length()-1);



    //Calculate a^b
    //int a, b;
    //cout<<"enter the value of a and b"<<endl;
    //cin>>a>>b;
    // cout<<power(a,b);



    //optimse way to calculate power using recrsion
    //cout<<powerop(a,b);




    //bubble sort using recrsion
    // int arr[10]={10,9,85,15,20,19,3,25,5,0};
    // Bubblesort(arr,10);
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<"  ";
    // }


    //Merge sort using recursion
    // int arr[10]={10,9,85,15,20,19,3,25,5,0};
    // MergeSort(arr,0,9);
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<"  ";
    // }



    //h.w.
    // Inversion count problem
    //merge sort using index




    //quick sort 
    // int arr[10]={10,9,85,15,20,19,3,25,5,0};
    // QuickSort(arr,0,9);
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<"  ";
    // }



    // leetcode 78
    // powerset nikle ka poblem
    // vector<int>arr={1,2,3};
    // vector<int>output;
    // vector<vector<int>>ans;

    // int index=0;
    // subset(arr,output,index,ans);

    // for (const auto& row : ans) {
    //     for (const auto& element : row) {
    //         cout << element << " ";
    //     }
    //     cout <<endl; 
    // }




    //Note: same logic for subsequence problem same as subset problem 

    // h.w.: how to solve subset ?susequence problem using bit manupilation



    //phone keyword problem(leet code -17)

/*
class Solution {
private:
void solve(string digits,string output, int index, vector<string>&ans,string mapping[]){

    //base case
    if(index>=digits.length()){
        ans.push_back(output);
        return;
    }

   /* pahle digit niklna string diya h na '23' so hm 2 nikl rhe h string diya h to '0' se gataye to digit niklega */

  /* int number =digits[index]-'0';
    /*aab mapping niklege*/
 /*  string value =mapping[number];

    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digits,output,index+1,ans,mapping);

        //backtrack aate saame string khali karna must h nhi to ans galat aaega
        output.pop_back();

    }
}
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0)
        return ans;

        string output;
        int index=0;
        string mapping[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output, index,ans, mapping);

        return ans ;
        
    }
};
*/



//permutation of a string(important)
/*class Solution {

private:
    void solve(vector<int>nums,vector<vector<int >>&ans,int index){
        //base case
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }


        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);

            
            solve(nums,ans,index+1);

            //backtrack(wapas pahle jaisa karne ke liye)
            swap(nums[index],nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int >>ans;
        int index=0;
        solve(nums,ans,index);
        return ans;
        
    }
};*/

//rate in a mize problem
/*
class Solution {
  private:
    bool isSafe(vector<vector<int>> maze,vector<vector<int>>visited,int x,int y){
        if((x>=0 &&x<maze.size()) &&(y>=0 && y<maze[0].size()) &&  maze[x][y]==1 && visited[x][y]==0 )
        return true;
        else
        return false;
    }
    void solve (vector<vector<int>> maze, vector<string>&ans, int x,int y, vector<vector<int>>visited, string output){
        //you have reach x,y here
        
        //base condition
        //aap desitination par aa gye
        if(x==maze.size()-1 && y==maze[0].size()-1){
            ans.push_back(output);
            return;
        }
        
        visited [x][y]=1;
        
        
        //4 options h aapke pass (D/L/R/U)
        
        //Down(x,y se down jana h )
        int newx=x+1;
        int newy=y;
        
        if(isSafe(maze,visited,newx,newy)){
            output.push_back('D');
            solve(maze,ans,newx,newy,visited,output);
            output.pop_back();
        }
        
         //Left(x,y se left jana h )
         newx=x;
         newy=y-1;
        
        if(isSafe(maze,visited,newx,newy)){
            output.push_back('L');
            solve(maze,ans,newx,newy,visited,output);
            output.pop_back();
        }
        
         //Right(x,y se right jana h )
         newx=x;
         newy=y+1;
        
        if(isSafe(maze,visited,newx,newy)){
            output.push_back('R');
            solve(maze,ans,newx,newy,visited,output);
            output.pop_back();
        }
        
         //Up(x,y se up jana h )
         newx=x-1;
         newy=y;
        
        if(isSafe(maze,visited,newx,newy)){
            output.push_back('U');
            solve(maze,ans,newx,newy,visited,output);
            output.pop_back();
        }
        
        
        //jab back track karke wapas jayege to visited aaray ko wapas same jaisa banane ke liye
        visited[x][y]=0;
        
    }
  
  
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string>ans;
        
        //source index par hi nhi ja sakta 
        if(maze[0][0]==0){
            return ans;
        }
        
        //aap index (0,0)par khare ho 
        int scrx=0;
        int scry=0;
        
        // aapne ek visited array bananya or starting mai zero dal diya h 
        vector<vector<int>>visited=maze;
        
        for(int i=0;i<maze.size();i++){
            for(int j=0;j<maze[0].size();j++){
                visited[i][j]=0;
            }
        }
        
        
        string output="";
        
        //function call
        solve( maze, ans, scrx,  scry, visited , output  );
        
        //lexograpghic order mai answer chaye es liye 
        sort(ans.begin() ,  ans.end());
        
        return ans;
        
    }
};*/







}