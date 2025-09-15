#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,6};

    for(int i=0;i<4;i++){
         if(arr[i]!=arr[i+1]-1){
            printf("%d",arr[i]+1);
         }
    }
    return 0;
}