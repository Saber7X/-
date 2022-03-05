#include <iostream>  
#include <stdio.h>  
#include <string.h>   
#include <stack>  
#include <queue>   
#include <map>  
#include <set>  
#include <vector>  
#include <math.h>  
#include <bitset>  
#include <algorithm>  
#include <climits>   
using namespace std;
int n;
int k;
const int N=1e5+10;
int h[N],w[N];

int f(int a){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+(w[i]/a)*(h[i]/a);
	}
	return sum;
}

int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>h[i]>>w[i];
	}
	int l=0,r=N;
	while(l<r){
		int mid=(l+r+1)/2;
		if(f(mid)>=k) l=mid;
		else{
			r=mid-1;
		}
	}
	cout<<l;
return 0;
}
