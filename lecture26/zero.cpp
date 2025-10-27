#include<stdio.h>
int main(){
    int arr[]={4,0,3,5,0};
    int count=0;
    int temp;
    for(int i=0;i<5;i++){
        if(arr[i]!=0){
            temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count++;
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}