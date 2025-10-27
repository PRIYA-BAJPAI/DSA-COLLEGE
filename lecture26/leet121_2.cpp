#include<stdio.h>
int main(){
    int arr[]={7,6,4,3,1};
    int minprice=arr[0];
    int maxdiff=0;
    for(int i=1;i<5;i++){
        if(minprice>arr[i]){
            minprice=arr[i];
        }else{
            int diff=arr[i]-minprice;
            if(maxdiff<diff){
                maxdiff=diff;
            }
        }
    }
    printf("maximum difference is %d ",maxdiff);
    return 0;
}