#include<stdio.h>
int sum(int n,int arr[]){
    if(n==0){
        return 0;
    }
    return arr[n-1]+sum(n-1,arr);
    // return i+sum(i-1);
}
int main(){
    int arr[]={1,7,8};
    int n=3;
    int add=sum(n,arr);
    printf("%d",add);
    return 0;
}