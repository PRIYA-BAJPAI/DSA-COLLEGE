#include<stdio.h>
int main(){
    int arr[5]={2,8,45,9,3};
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<5;i++){
       if(arr[i]<min){
        min=arr[i];
       }
       if(arr[i]>max){
        max=arr[i];
       }
       
        
    }
    printf("minimum is %d \n",min);
    printf("maximum is %d ",max);
    return 0;
}