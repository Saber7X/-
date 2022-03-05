#include<bits/stdc++.h>
using namespace std;
int main(){
	char a;
	int n;
	long long int t=0;
	while(scanf("%c",&a)){
		
		if(a=='.')
		{
			break;
		}
		else
		{
			t++;
		}

		scanf("%d",&n);
		getchar();
		if(t>1)
		{
			printf("\n");
		}		
		
		int k,d;
		k=(n*2-2)/2;
		if(k%2!=0){
			k=k-1;
		}
		d=(n*2-k-2)/2;
		int s=2*d+k+2;
		for(int i=0;i<s;i++){
			printf("%c",a);
			if(i==s-1){
				printf("\n");
			}
		}
		
		for(int i=1;i<=s-2;i++){
			if(i==1){
				printf("%c",a);
			}
			printf(" ");
			if(i==s-2){
				printf("%c\n",a);
			}
		}
		for(int i=0;i<n-4;i++){
			printf("%c",a);
			for(int h=0;h<d;h++){
				printf(" ");
			}
			for(int h=0;h<k;h++){
				printf("%c",a);
			}
			for(int h=0;h<d;h++){
				printf(" ");
			}			
			printf("%c\n",a);
		}
		printf("%c",a);
		for(int i=1;i<=s-2;i++){
			printf(" ");
		}
		printf("%c\n",a);		
		for(int i=0;i<s;i++){
			printf("%c",a);
			if(i==s-1){
				printf("\n");
			}
		}			
	}
	return 0;
}
