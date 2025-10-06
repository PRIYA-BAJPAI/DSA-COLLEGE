#include<stdio.h>
#include<string.h>
int main(){
    char str[]="mdam";
    int istrue=1;
    int l=strlen(str);
    for(int i=0;i<l/2;i++){
        if(str[i]!=str[l-i-1]){
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