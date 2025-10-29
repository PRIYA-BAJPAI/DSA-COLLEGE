#include<stdio.h>
int main(){
    int a[100],n;
    printf("Enter number of elements you want to input :");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int XOR1=0;
    int XOR2=0;
    for(int i=1;i<=n+1;i++){
        XOR1=XOR1^i;
    }
    for(int i=0;i<n;i++){
        XOR2=XOR2^a[i];
    }
    printf("MISSING : %d",XOR1^XOR2);
    return 0;
}