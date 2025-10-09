#include<stdio.h>
#include<string.h>
int main(){
    char arr[]="andromeda";
    int n=strlen(arr); 
    int freq[256]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<256;i++){
        if(freq[i]>0){
        printf("%c: %d\n",i,freq[i]);
        }
    }
    return 0;
}