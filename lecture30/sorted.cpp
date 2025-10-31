#include<stdio.h>
int isSorted(int arr[],int f,int n){
    if(f==n-2){
        return 1;
    }
    if(arr[f]>arr[f+1]){
        return 0;
    }
    isSorted(arr,++f,n);

}
int main(){
    int arr[]={1,2,3,4,5};
    int f=0;
    int n=5;
    int result=isSorted(arr,f,n);
    if(result==1){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    return 0;
}