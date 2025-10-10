#include<stdio.h>
#include<string.h>
int main(){
    char str[]="pppompp";
    int n=strlen(str); 
    int freq[256]={0};
    for(int i=0;i<n;i++){
        if(freq[str[i]]==0){
        freq[str[i]]=1;
        }
        if(str[i]==str[i+1]){
            freq[str[i]]++;
            
        
       
        
    }else{
     printf("%c%d",str[i],freq[str[i]]);
        freq[str[i]]=1;
    }
}
    
    
    return 0;
}