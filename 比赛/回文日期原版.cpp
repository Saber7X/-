#include<bits/stdc++.h>
using namespace std;
bool isleap(int year)
{
	return (year%4==0&&year%100!=0)||year%4==0;
}
int main()
{
	int a,b;//两个日期
	int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
	int cnt=0;
	scanf("%d%d",&a,&b);
	int y1,y2,m1,m2,d1,d2;
	y1=a/10000;m1=a/100%100;d1=a%100;
	y2=b/10000;m2=b/100%100;d2=b%100;
	int num[1000];
	int k=0;
	while(y1<y2||m1<m2||d1<d2) 
		{
			k=0;
			num[k]={0};
			num[k]=y1/1000;
			k++;
			num[k]=y1/100%10;
			k++;
			num[k]=y1/10%10;
			k++;
			num[k]=y1%10;
			k++;
			num[k]=m1/10;
			k++;
			num[k]=m1%10;
			k++;
			num[k]=d1/10;
			k++;
			num[k]=d1%10;
			k++;
			/*for(int j=0;j<k;j++)
			{
				printf("%d",num[j]);
			}*/
			int t=0;
			for(int i=0;i<=3;i++)
			{
				if(num[i]!=num[7-i])
				{
					t=1;
					break;
				}
			}
			if(t==0)
			{
				cnt++;
			}
			d1++;
			if(d1==month[m1][isleap(y1)]+1)//满当月天数 
			{
				m1++;//月份＋1 
				d1=1; 
			}
			if(m1==13)
			{
				y1++;//年份＋1 
				m1=1;
			}
		}
		printf("%d",cnt);

	//printf("%04d %02d %02d\n%04d %02d %02d",y1,m1,d1,y2,m2,d2);
	return 0;
}
