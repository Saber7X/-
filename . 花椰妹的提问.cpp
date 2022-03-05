#include<bits/stdc++.h>
using namespace std; 
const int N=1e5+5;
int res[N], flag[N], a[N];
int n,q;
int main()
{
    cin>>n;
    res[0]=n;
    flag[n+1]=n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        res[i]=min(res[i-1],a[i]);
    }
    for(int i=n;i>=1;i--){
        flag[i]=min(flag[i+1],a[i]);
    }
    int l,r;
    cin >> q;
    for(int i=1;i<=q;i++){
        cin>>l>>r;
        printf("%d\n",min(res[l-1],flag[r+1])); 
    }
} 
