#include<stdio.h>
#include<string.h>
int main(){
    char str[]="mountain";
    char copy[10];
    int l=strlen(str);
    for(int i=0;str[i]!='\0';i++){
        copy[i]=str[i];
        
    }
    
        printf("%s",copy);
    
    return 0;
}