#include <iostream>
#include<vector>
using namespace std;

bool selfDividing(int n){
  int nums=0;
  if(n%10==0){
     return 0;
  }
  int p=n;
      while(n!=0){
      nums=n%10;
      if(nums ==0 )
      return 0;
      if( p% nums !=0)
      return 0;
      n=n/10;
  }
 return 1;
}
void findAllSelfDividingNumbers(int lower, int upper) {
    // Write your code here
    
    vector<int> temp;
    for(int i=lower;i<=upper;i++){
        if(selfDividing(i)){
            temp.push_back(i);
        }
    }
    
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<"  ";
    }
}
int main(){
    int lower=10;
    int upper=30;
    findAllSelfDividingNumbers(lower,upper);
}