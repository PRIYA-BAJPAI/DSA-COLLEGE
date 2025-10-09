#include<stdio.h>
#include<string.h>
int main(){
    char str[]="jaya";
    int n=strlen(str);
    int freq[256]={0};
    for(int i=0;i<n;i++){
        freq[str[i]]++;
       
    }
    for(int i=0;i<256;i++){
        if(freq[i]==1){
            printf("%c: %d",i,freq[i]);
            break;
        }
    }
}