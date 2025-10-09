#include<stdio.h>
#include<string.h>
int main(){
    char arr[]="hello";
    int n=strlen(arr); 
    int freq[256]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
        if(arr[i]==arr[i+1]){
        freq[arr[i]]++;
        }
        printf("%c%d\n",i,freq[i]);
    }
    
    return 0;
}//sudharo