#include<stdio.h>
#include<string.h>
int main(){
    char str[]="shanti";
    int n=strlen(str); 
    int j=0;
    char newstr[100];
    char target='a';
    for(int i=0;i<n;i++){
        if(str[i]==target){
            newstr[j]=str[i];
            j++;
        }else{
        printf("%c",str[i]);
        }
    }
   
    // printf("%s",str);
    
    return 0;
}