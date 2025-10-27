#include<stdio.h>
#include<string.h>
int main(){
    char str[]="mamd";
    int istrue=1;
    int l=strlen(str);
    int n=l-1;
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1]){
            istrue=0;
            break;
        }
    }
  if(istrue==0){
    printf("not a palindrome");
  }else{
    printf("palindrome");
  }
   return 0; 
}