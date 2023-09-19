#include<iostream>
#include<string.h>
using namespace std;
 int getLength(char ch[]){
   int length=0;
   int i=0;
   while(ch[i] != '\0'){
     length++;
     i++;
   }
   return length;
 }
void reverse(char ch[]){
 int i=0;
  int n=getLength(ch);
  int j=n-1;
  while(i<=j){
    swap(ch[i],ch[j]);
    i++;
    j--;
  }
}
void replace(char ch[]){
  int i=0;
  int n=strlen(ch);
  while(i<n){
    if(ch[i]==' '){
      ch[i]='@';
    }
    i++;
  }
}
bool palindrome(char ch[]){
  int i=0;
  int n=strlen(ch);
  int j=n-1;
  while(i<=j){
    if(ch[i]==ch[j]){
      i++;
      j--;
    }
    else{
      return false;
    }
  }
  return true;
}
void UpperLower(char ch[]){
  int n=strlen(ch);
  for(int i=0;i<n;i++){
    if(ch[i]>=65 && ch[i]<=90){
      ch[i]+=32;
    }
     else if(ch[i]>=97 && ch[i]<=122){
      ch[i]-=32;
    }
  }
} 
int main (){
  //null character explanation
  // char ch[100];
  // cin>>ch;
  // for(int i=0;i<7;i++){
  //   cout<< "index: "<<i <<" value:" <<ch[i] <<endl;
  // }
  // int value=(int)ch[6];
  // cout<<"value is: " << value<<endl;

  
  //readability of cin
  // char ch[100];
  // cin>>ch;
  // cout<<ch<<endl;
  
  //readability of cin using getline
  // char ch[100];
  // cin.getline(ch,10) ;
  // cout<<ch;

  //length of string
  // char ch[100];
  // cin.getline(ch,20);
  // int ans= getLength(ch);
  // cout<<ans<<endl;

  //reverse of a string
  // char ch[100];
  // cin.getline(ch,20);
  // cout<< "initialy string was :" << ch <<endl;
  // reverse(ch);
  // cout<<"after reversal :" <<ch<<endl;

  //replace spaces with @
  // char ch[100];
  // cin.getline(ch,100);
  
  // replace(ch);
  // cout<<"after replacement :" <<ch<<endl;

  //palindroem string
 //  char ch[100];
 //  cin.getline(ch,100);
 // cout<<"check palindrome : "<<palindrome(ch)<<endl;

  //upper lower
  char ch[100];
  cin.getline(ch,100);
  UpperLower(ch);
  cout<<ch<<endl;
  
}
