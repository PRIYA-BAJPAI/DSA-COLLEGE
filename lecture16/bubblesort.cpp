#include <stdio.h>
int main()
{    int i;
    int a[5]={2,4,6,3,7};
    int temp;
    for(int i=0;i<5;i++)
    {  
        for(int j=0;j<5-1-i;j++)
       { temp=a[j];
        if(a[j]>a[j+1]){
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
        
    }
    for (i=0;i<5;i++)
    {
        printf(" %d ",a[i]);
    }
    
    }