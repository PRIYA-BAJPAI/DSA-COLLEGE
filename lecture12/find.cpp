#include<stdio.h>
int main(){
    int arr[5]={2,4,6,8,10};
    int s=4;
    int i;
    for(i=0;i<5;i++){
        if(arr[i]==s){
            printf("true");
        }
        break;
        
    }
    
    return 0;
}