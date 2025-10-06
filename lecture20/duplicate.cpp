#include<stdio.h>
#include<string.h>
int main(){
    char str[]="elephant";
    int n=strlen(str);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(str[i]==str[j]){
                printf("duplicate element exist for %c\n",str[i]);
            }
        }
    }
    return 0;
}