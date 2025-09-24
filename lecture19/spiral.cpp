#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        printf("%d ",arr[0][i]);
    }
    for(int i=1;i<3;i++){
        printf("%d ",arr[i][2]);
    }
    for(int i=1;i>=0;i--){
        printf("%d ",arr[2][i]);
    }
    for(int i=1;i>=1;i--){
        printf("%d ",arr[i][0]);
    }
    for(int i=1;i<2;i++){
        printf("%d ",arr[1][i]);
    }
    return 0;
}