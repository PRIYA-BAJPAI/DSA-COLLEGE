 #include<stdio.h>
 int main(){
    int arr[7]={1,3,5,6,-5,4,7};
    int k=7;
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]+arr[j]==k){
                printf("%d and %d\n",i,j);
                
            }
        }
    }
    return 0;
 }