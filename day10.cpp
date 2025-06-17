#include<iostream>
#include<vector>
#include <string>
#include <cstring>
using namespace std;


//character arrays & strings

// strings in C++  is   -->   1 dimensional char arrays


// //length of string
// int getlenght(char ch[]){
//     int count=0;
//     for(int i=0;ch[i] != '\0';i++){
//         count ++;
//     }
//     return count;
// }


// //reverse a string
//  void getReverse(char ch[],int length){
//     int j=length-1;
//     int i=0;
//     while(i<j){
//         swap(ch[i],ch[j]);
//         i++;
//         j--;
//     }
    
// }
// // if question is in upper caseor lower  then lower case mai convert karna
// char toLowerCase(char ch){
//     if(ch >='a' && ch <='z'){
//         return ch;
//     }
//     else{
//         char temp=ch - 'A' + 'a';
//         return temp;
//     }
// } 

// bool CPalindrom(char ch[],int length){
//     int i=0;
//     int j=length-1;
//     while(i<j){
//         //for case sencetive 
//         if(ch[i]!=  ch[j])
//         return false;
//         i++;
//         j--;

//     }
//     return true;
// }

// //check palindrom or not(for Not case senitive)
// bool Palindrom(char ch[],int length){
//     int i=0;
//     int j=length-1;
//     while(i<j){
//         //not case sencetive 
//         if(toLowerCase(ch[i])!=  toLowerCase(ch[j]))
//         return false;
//         i++;
//         j--;

//     }
//     return true;
// }
// int main(){

//     //creation of character array 
//     char ch[10];


//     // input lene ka tarika in char arrays(input char by char jab tak 0\ na aa jaye )
//     cin>>ch;
    
//     //output dene ka tarika in char arrays(output char by char jab tak 0\ na aa jaye  )
//     cout<<ch<<endl;;

//     // char name [20];
//     // cout<<"Enter the name"<<endl;
//     // cin>>name;

//     // //maine bich mai null char dal diya 
//     // name[1]='\0';

//     // cout<<"Output is  "<<name<<endl;


//     // if input like a 0\ b 0\ c 0\ in this case output is a only (stop ho jata h ,first null space mai hi )
//     //if input is given Vinay Tiwari then output is Vinay (beacuase cin stop the execution jab bhi aap usko space dege , tab dege , new line denge i.e, endl )





//     // length of string 
//     int length =getlenght(ch);
//     cout<<"Length :   "<<getlenght(ch)<<endl;

//     getReverse(ch,length);
//     //reverse of string
//     cout<<"Reverse of string :   " << ch<<endl;

//     //check palindrom or not (for Case sensitive)
//     cout<<"For Case sensitive  :  "<<CPalindrom(ch,length)<<endl;

//     //check palindrom or not (for Not  Case sensitive)
//     cout<<"For Not Case sensitive "<<Palindrom(ch,length)<<endl;

//     //convert in lower case 
//     cout<<"Charcater is  "<<toLowerCase('B')<<endl;
//     cout<<"Charcater is  "<<toLowerCase('c')<<endl;


// }



//string in C++
// int main(){

//     //creation of string
//     string str=" Vinay Babbar"; 

//     //length niklna
//     cout<<str.length()<<endl;

//     // kuch add karna str mai
//     str.push_back('c');

//     cout<<str<<endl;;

//     //agar last character hatana h 
//     str.pop_back();
//     cout<<str<<endl;

// }





// //valid palindrome (leetcode)
// // faltu charcter hatane h , sabko lowercase karna h , fir palindrome check


// //step 1.lower case mai change karna upper case wale ko
// char ToLowerCase(char s){

//     if(s>='a'&& s<='z' ||s>='0'&& s<='9' ){
//         return s;
//     }
//     else{
//         char temp=s;
//         s= temp-'A'+'a';
//         return s;
        
//     }
// }

// //step2.faltu char jaise comma queston mark hash etc hatana 
// string faltuChar(string s){
//     string temp;
//     int i=0;
//     int n=s.length();
//     while(i<n){
//         if(s[i]>='a'&& s[i]<='z' ||s[i]>='A'&& s[i]<='Z' ||s[i]>='0'&& s[i]<='9' ){
//             temp.push_back(ToLowerCase(s[i]));
//             i++;
//         }
//         else{
//             i++;
//         }
//     }
//     return temp;
// }

// //step 3.palindrome check karna 
// bool checkPalindrome(string s)
// {
    
//     string p= faltuChar(s);


//     int i=0;
//     int j=p.length()-1;
//     while(i<=j){
//         if(p[i] != p[j]){
//         return false;
//         }
//             i++;
//             j--;
//     }
//     return true;
// }
// int main(){
//     string s="5?36@6?35";
    
//     string p=faltuChar(s);
//     if(checkPalindrome(p))
//     cout<<"Yes it is Palindrome"<<endl;
//     else
//     cout<<"Not plaindrome"<<endl;
// }



//Leetcode 186 no,  (h.w.) video -22
// Reverse word in a string
// ex..I/p  My name is Vinay 
//     O/p  yM eman si yaniV

// spaces ko ignore kare or words ko reverse kare 





//question .  most frequent char
// Input: s = "testsample"
// Output: 'e'

// Input: s = "output"
// Output: 't'
// Explanation:  t and u are the characters with the same frequency, but t is lexicographically smaller.

// char getMostFreqChar(string s){

//     //har ek character(a to z) ka count store karna array mai
//     int arr[26]={0};
//     for(int i=0;i<s.length();i++){
//         int ch=s[i];
//         int number=ch-'a';
//         arr[number]++;
//     }

//     //maximum count niklna or char ko niklna 
//     int max=0;
//     int ans=0;
//     for(int i=0;i<26;i++){
//         if(max<arr[i]){
//             max=arr[i];
//             ans=i;
//         }
//     }
//     char result='a'+ans;
//     return result;



// }
// int main(){
//     string s;
//     cout<<"enter the string  :  "<<endl;
//     cin>>s;

//    cout<<"Most occuring character the string is :    "<< getMostFreqChar(s);

// }





//imp. Note (built in functions)
//Hamne padha ki cin apni excutation stop kar deta agar space , tab, ya new line aate h to 
//so cin.getline(string name,length) ka use hota h jo space ko ignore karta h ;

// int main(){
//     // string s;
//     // cout<<"Enter the string s : "<<endl;
//     // cin>>s;
//     // cout<<s;

//     char q[100];
//     cout<<"Enter the string q: "<<endl;
//     cin.getline(q,100);
//     cout<<q;
// }


//inbult functions
// int main(){
//     char ch[100]="Vinay";
//     char d[100]="Vinay";

//     //to find chacter array length
//     cout<<"Lenth of Charcter array is    "<<strlen(ch)<<endl;


//     //compare two character aary string(same o/p is 0, not same o/p is 1)
//     cout<<"compare of Charcter arrays is    "<<strcmp(ch,d)<<endl;

//     //copy karna in character aary
//     // strcpy(destination,source)
//     char x[100];
//     strcpy(x,ch);
//     cout<<"copy of Charcter arrays is    "<<x<<endl;


// }






//Replace space problem 
// i/p: My Name is Vinay
// o/p:My@40Name@40is@40Vinay
//     string replaceSpaces(string &str){
// 	// Write your code here.
// 	string temp;
// 	for(int i=0;i<str.length();i++){
// 		if(str[i] != ' '){
// 			temp.push_back(str[i]);
// 		}
// 		else{
// 			temp.push_back('@');
// 			temp.push_back('4');
// 			temp.push_back('0');
// 		}
// 	}
// 	return temp;
// }

// int main(){
//     string s="My name is Vinay";
//     cout<<replaceSpaces(s);
// }


// h.w.(inplace solution replace space problem ka )




