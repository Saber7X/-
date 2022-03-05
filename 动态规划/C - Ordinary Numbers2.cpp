#include<stdio.h>
int main(){
	long int n;
	scanf("%d",&n);
	int sum=0;
	while(n--){
		int x1;
		scanf("%d",&x1);
		if(x1<10) 
			printf("%d\n",x1);
		else if(x1<=99999){
			sum=9;                                      
		for(int i=10;i<=x1;i++){
			int a[20]={0};//保存每一位数 
			int q=0;
			int x=i;
			while(x){
				a[q]=x%10;
				x/=10;
				q++;
				}
			int t=1;
			for(int i=0;i<q-1;i++){
				if(a[i]!=a[i+1])
					t=0;
			}
			if(t==1)
				sum++;
			}
			printf("%d\n",sum);
		}
		//优化操作 
		else if(x1>99999){
			if(x1<111111) sum=45;
			else if(x1<222222) sum=46;
			else if(x1<333333) sum=47;
			else if(x1<444444) sum=48;
			else if(x1<555555) sum=49;
			else if(x1<666666) sum=50;
			else if(x1<777777) sum=51;
			else if(x1<888888) sum=52;
			else if(x1<999999) sum=53;
			else if(x1<1111111) sum=54;
			else if(x1<2222222) sum=55;
			else if(x1<3333333) sum=56;
			else if(x1<4444444) sum=57;
			else if(x1<5555555) sum=58;
			else if(x1<6666666) sum=59;
			else if(x1<7777777) sum=60;
			else if(x1<8888888) sum=61;
			else if(x1<9999999) sum=62;
			else if(x1<11111111) sum=63;
			else if(x1<22222222) sum=64;
			else if(x1<33333333) sum=65;
			else if(x1<44444444) sum=66;
			else if(x1<55555555) sum=67;
			else if(x1<66666666) sum=68;
			else if(x1<77777777) sum=69;
			else if(x1<88888888) sum=70;
			else if(x1<99999999) sum=71;
			else if(x1<111111111) sum=72;
			else if(x1<222222222) sum=73;
			else if(x1<333333333) sum=74;
			else if(x1<444444444) sum=75;
			else if(x1<555555555) sum=76;
			else if(x1<666666666) sum=77;
			else if(x1<777777777) sum=78;
			else if(x1<888888888) sum=79;
			else if(x1<999999999) sum=80;
			else if(x1<1000000001)sum=81;
				printf("%d\n",sum);
		}
	}
	return 0;
}
