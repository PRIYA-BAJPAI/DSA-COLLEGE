#include<stdio.h>
#include<string.h>
int main(){
    char str[]="madhamaam";
    int n=strlen(str);
    
    int i,j;
    for( i=0;i<n;i++){
        int repeat=0;
        for( j=0;j<i;j++){
             
            if(str[i]==str[j]){
               
                repeat++;
            }
        }
        if(repeat==0){
            printf("%c",str[i]);
        }
        }
   
    return 0;
}