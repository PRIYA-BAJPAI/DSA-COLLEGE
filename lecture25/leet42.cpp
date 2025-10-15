#include<stdio.h>
int main(){
    int arr[5]={4,3,0,6,2};
    int leftmax[5];
    int rightmax[5];
    for(int i=0;i<5;i++){
        if(arr[i]>arr[i-1]){
            leftmax[i]=arr[i];
        }else{
            leftmax[i]=leftmax[i-1];
        }
        if(arr[i]>arr[i+1]){
            rightmax[i]=arr[i];
        }else{
            leftmax[i]=leftmax[i-1];
        }
    }
    int ans=0;
    for(int i=0;i<5;i++){
        int min=0;
        if(leftmax[i]>rightmax[i]){
            min=rightmax[i];
        }else{
            min=leftmax[i];
        }
        ans=ans+(min-arr[i]);
    }
    printf("%d",ans);
    return 0;
    
}