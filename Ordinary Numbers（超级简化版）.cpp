#include<iostream> 
int main()
{
	long long int n;
	scanf("%lld",&n);
	while(n--){
		long long int a;
		scanf("%lld",&a);
		if(a<10) printf("%lld\n",a);
		else{
			long long int cnt=-9,x=a,sum1=0;
			while(x>0){
				x/=10;
				sum1=sum1*10+1;
				cnt+=9;}
			cnt+=a/sum1;
			printf("%lld\n",cnt);}}
	return 0;
}
