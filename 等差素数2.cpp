#include<stdio.h>
#define L 9999999
#define longlong LL
long long a[L]={0};
void prime(int temp){
    for(int i=2;i*i<=temp;i++)
        if(temp%i==0)return;
    a[temp]=1;
    return;
}
int main(){
    a[1]=1;
    for(int i=2;i<999999;i++)
        prime(i);

    for(int len  =10;len<1000;len++)
     for(int i=2;i<999999;i++)
     {
        int j;
        for( j =0;j<10;j++){
            if(!a[i+j*len])
                break;
        }
        if(j==10){
           printf("%d",len);
           return 0;
        }
     }
 return 0;
}
