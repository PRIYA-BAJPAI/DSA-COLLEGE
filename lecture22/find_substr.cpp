#include<stdio.h>
#include<string.h>
int main(){
    char str[]="abcaabccc";
    char target[]="cab";
    int n=strlen(str);
    int m=strlen(target);
   
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(str[i]==target[j]){
            i++;
            j++;
        }else{
            i=i-j+1;
            j=0;
        }
        
    }
    if(j==m){
        printf("found");
    }else{
        printf("not found");
    }
    return 0;

}
 // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(str[i]==target[j]){
                
    //         }
    //     }
    // }