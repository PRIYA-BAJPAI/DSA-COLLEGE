#include<stdio.h>
#include<string.h>
int main(){
    char str[]="elephant";
    int n=strlen(str);
    
    int i,j;
    for( i=0;i<n-1;i++){
        int repeat=0;
        for( j=i+1;j<n;j++){
             
            if(str[i]==str[j]){
               
                repeat++;
                // break;
            }
        }
        if(repeat!=0){
            printf(" ");
        }else{
            printf("%c",str[i]);
        }
        }
   
    return 0;
}