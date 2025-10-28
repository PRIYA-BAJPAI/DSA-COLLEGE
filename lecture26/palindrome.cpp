#include<stdio.h>
#include<string.h>
int main(){
    char str[]="abcdef";
    int istrue;
    int l=strlen(str);
    int found=0;
    while(l>0){
      istrue=1;
      for(int i=0;i<l/2;i++){
        if(str[i]!=str[l-i-1]){
            istrue=0;
               break;
        }
       
        }
        if(istrue==1){
          found=1;
          break;
        }
           l--;
       
    }
  if(found){
    printf("palindrome");
  }else{
    printf("no palindrome possible");
  }
   return 0; 
}