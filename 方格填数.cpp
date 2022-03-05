#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int a[10];
int visit[10];
int count=0;

void dfs(int a[],int n){
    
    if(n==10){
    if(abs(a[0]-a[1])==1||abs(a[0]-a[3])==1||abs(a[0]-a[4])==1||abs(a[0]-a[5])==1
    ||abs(a[1]-a[2])==1||abs(a[1]-a[4])==1||abs(a[1]-a[5])==1||abs(a[1]-a[6])==1
    ||abs(a[2]-a[5])==1||abs(a[2]-a[6])==1
    ||abs(a[3]-a[4])==1||abs(a[3]-a[7])==1||abs(a[3]-a[8])==1
    ||abs(a[4]-a[5])==1||abs(a[4]-a[7])==1||abs(a[4]-a[8])==1||abs(a[4]-a[9])==1
    ||abs(a[5]-a[6])==1||abs(a[5]-a[8])==1||abs(a[5]-a[9])==1
    ||abs(a[6]-a[9])==1
    ||abs(a[7]-a[8])==1
    ||abs(a[8]-a[9])==1){
        return;
    }else{
        count++;
        return;
    }
    }
    else{
        for(int i=0;i<=9;i++){
            if(visit[i]==0){
                a[n]=i;
                visit[i]=1;
                dfs(a,n+1); //第几层，0-9有十层 dfs(10) 是第十层 
                visit[i]=0;
            }
        }
    }
}

int main(){
    
    memset(visit,0,sizeof(visit));
    dfs(a,0);
    cout<<count;
} 
