//triangle type
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter size of each side\n";
    cin>>a>>b>>c;
    if(a<=0 || b<=0 || c<=0){
        cout<<"invalid input";
    } else if(a==b && b==c && c==a){
        cout<<"Triangle is an Equilateral triangle";
    }else if(a==b || b==c || c==a){
        cout<<"Triangle is Isoscelous triangle";
    }else{
        cout<<"scalene triangle";
    }
    return 0;
}