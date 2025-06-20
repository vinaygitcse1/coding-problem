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



//Leetcode 186 no,  (h.w.) 
// Reverse word in a string
// ex..I/p  My name is Vinay 
//     O/p  yM eman si yaniV

// spaces ko ignore kare or words ko reverse kare 
// void reverse(string& a,int s,int e){
//     while(s<e){
//         swap(a[s],a[e]);
//         s++;
//         e--;
//     }
    
// }
// int main(){
//     string s="My father name is Vijay tiwari";
//     int k=0;

//     for(int i=0;i<=s.length();i++){
// jab bhi space aae or null character aae to stop ho jana h 
//         if(s[i]==' ' || s[i]=='\0'){
//             reverse (s,k,i-1);
//             k=i+1;
//         }
        
//     }
//     cout<<s;

// }





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




//remove all occurrences of a substring 
// Note:(find; use to find substring in given string )
//      (erase; use of erase the substring in given string)
// i/p: daabcbaabcbc, part : abc
// o/p: dab


// agar string ke length zero h tab bahar nikl jana while loop se 
// fir check kiya ki string ke ander part(substring) present h agar h to while loop ke ander chle jana 
// fir erase kar dena loop se

// int main(){
//     string s= "daabcbaabcbc";
//     string part="abc";

//     while(s.length() !=0 && s.find(part)<s.length()){
//         s.erase(s.find(part),part.length());
//     }
//     cout<<s;

// }






//permutation in string (most important question that uses sliding window concept)

    // bool Checkequal(int a1[26],int a2[26]){
    //     for(int i=0;i<26;i++){
    //         if(a1[i] != a2[i])
    //         return 0;
    //     }
    //     return 1;
    // }



    // bool checkInclusion(string s1, string s2) {
    //    //a to z ke frequency in string s1;
    //    int arr1[26]={0};
    //    for(int i=0;i<s1.length();i++){
    //     char ch =s1[i];
    //     int index=ch-'a';
    //     arr1[index]++;
    //    } 

    //    //sliding window ka use karege 
    //    //traverse s2 string in window of size s1.length and compare
    //    int i=0;
    //    int windowSize=s1.length();
    //    int arr2[26]={0};


    // //running for only first window 
    // //yaha hm new frequency array bana rhe s2 string ke liye s1 window size ka 
    //    while(i<windowSize && i < s2.length()){
    //     char ch =s2[i];
    //     int index=ch-'a';
    //     arr2[index]++;
    //     i++;
    //    }


    //     //checking aarys are equal or not
    //    if(Checkequal(arr1,arr2))
    //    return 1;
       

    //    //aage window process karo
    //    while(i < s2.length()){
    //     char newchar=s2[i];
    //     int index=newchar-'a';
    //     arr2[index]++;

    //     char oldchar=s2[i-windowSize];
    //     index=oldchar-'a';
    //     arr2[index]--;
        
    //     i++;

    //     if(Checkequal(arr1,arr2))
    //     return 1;
    //    }

    // return 0;  
    // }

    // int main(){
    //     string s1="abcdabcdabcddccabcdabcd";
    //     string s2="ab";
    //     string s3="cc";
    //     string s4="g";
    //     if(checkInclusion(s4,s1)){
    //         cout<<"permutation is present"<<endl;
    //     }
    //     else{
    //         cout<<"Not present"<<endl;
    //     }

    // }






    //Remove all adjacent duplicates in a string 

    // h.w.1047 leetcode



    //string compression (imp question ) leetcode 443
    
    // string compression(string s){
    //     string temp;
    //     int i=0;
    //     int ansIndex=0;
    //     int n=s.length();

    //     while(i<n){
    //         int j=i+1;
    //         while (j<n &&s[i]==s[j]){
    //             j++;
    //         }

    //         //yaha kab aaege
    //         //ya to string pura traverse ho jaye 
    //         //ya to new/Different chater encounter kia hai
            
    //         //old char store kar lo
    //         s[ansIndex]=s[i];
    //         ansIndex++;

    //         int count=j-i;

    //         if(count>1){
    //             //converting counting into single digit and saving in answer
    //             string cvt =to_string(count);
    //             for( char ch : cvt){
    //                 s[ansIndex]=ch;
    //                 ansIndex++;

    //             }
    //         }
    //         //Moving new or different chacter 
    //         i=j;
    //     }
    //     for(int i=0;i<ansIndex;i++){
    //         temp.push_back(s[i]);
    //     }
    //     return temp;
    // }



    // int main(){
    //     string s="aaabbbcccddddddddeeeeeeeeeeeeeeeeeeeeeee";
    //     cout<<compression(s);
    // }







 //split string and check no of vowels are equal ir not   
    bool isVowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return 1;
    }
    return 0;
}

char isLower(char ch){
    if(ch>='a'  && ch<='z' || ch>='0' && ch<='9'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
} 
bool splitString(string &str){
    // Write your code here.
    int start=0;
    int end=str.length()-1;

    int mid=start+(end-start)/2;

    int count1=0;
    int count2=0;

    while(start<=mid){
        char ch=isLower(str[start]);
        if(isVowel(ch))
        count1++;
        
        start++;
        
        
    }
    
    mid++;
    while(mid<=end){
        char ch=isLower(str[mid]);
        if(isVowel(ch))
        count2++;
        mid++;
    }
    
    if(count1==count2)
    return 1;
    return 0;


}
int main(){
    string s="codingninjas";
    cout<<splitString(s);
}

