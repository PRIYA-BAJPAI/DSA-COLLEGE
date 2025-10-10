#include<stdio.h>
#include<string.h>
int main(){
    char arr[]="potato";
    int n=strlen(arr); 
    int freq[256]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int max=0;
    int j;
    int ch;
    for( j=0;j<n;j++){
        if(freq[arr[j]]>freq[max]){
            max=arr[j];
            ch=j;
        }
    }
    printf("%c",arr[ch]);
    // for(int i=0;i<256;i++){
    //     if(freq[i]>0){
    //     printf("%c: %d\n",i,freq[i]);
    //     }
    // }
    return 0;
}