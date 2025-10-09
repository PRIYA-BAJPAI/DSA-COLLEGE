#include<stdio.h>
#include<string.h>
int main(){
    char arr[]="hello";
    int n=strlen(arr); 
    int freq[256]={0};
    int i;
    for( i=0;i<n;i++){
        freq[(unsigned char)arr[i]]++;
    }
    for( i=0;i<256;i++){
        if(freq[i]>0){
            char arr=arr-i;
        printf("%c%d",i,freq[i]);
        }
    }
    return 0;
    
}//sudharna hai