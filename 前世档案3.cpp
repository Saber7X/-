#include <bits/stdc++.h>   
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
    int sum=1;
    for(int i=0;i<n;i++){
        sum=sum*2;
    }
    for(int i=0;i<m;i++){
        string a;
        cin>>a;
        int len=a.length();
        int l=1,r=sum;
        for(int j=0;j<len;j++){
            if(a[j]=='y'){
                r=(l+r)/2;
            }else{
                l=(l+r)/2;
            }
        }
        cout<<r<<endl;
    }
return 0;
}

