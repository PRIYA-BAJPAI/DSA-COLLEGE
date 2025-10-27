#include<stdio.h>
int main(){
    int arr[5]={4,3,0,6,2};
    int min;
    int leftmax[5];
    int rightmax[5];
    leftmax[0]=arr[0];
    rightmax[4]=arr[4];
    for(int i=1;i<5;i++){
        if(arr[i]>leftmax[i-1]){
            leftmax[i]=arr[i];
        }else{
            leftmax[i]=leftmax[i-1];
        }
        
    }
    for(int i=3;i>=0;i--){
        if(arr[i]>rightmax[i+1]){
            rightmax[i]=arr[i];
        }else{
            rightmax[i]=rightmax[i+1];
        }
    }
    int ans=0;
    for(int i=0;i<5;i++){
        
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