#include<iostream>
#include<math.h>
 
using namespace std;
 
int p[10001];
 
int num;
 
int main(){
    p[1]=2;
    int t=2;
    int n=3;
    while(t<=10000){
        int f=1;
        for(int i=2;i<sqrt(n)+1;i++){
            if(n%i==0){
                f=0;
                break;
            }
        }
        if(f){
            p[t++]=n;
        }
        n++;
    }
    while(cin>>num){
        cout<<p[num]<<endl;
    }
    return 0;
}

