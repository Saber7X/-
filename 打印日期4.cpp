#include<bits/stdc++.h>
using namespace std;
bool isleap(int year)
{
	return(year%4==0&&year%100!=0)||(year%400==0);//�ж��Ƿ������� 
}
int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
int main()
{
	int a,b,c;
	
	while(scanf("%d %d",&a,&b)!=EOF)//��ݣ����� 
	{
		int sum=b;
		int cnt=1;//ÿ�ּ�һ�����·�
		for(int i=0;i<=12;i++)
		{
			if(sum<=month[i][isleap(a)])
			{
				cnt=i;
				c=sum;
				break;
			}
			/*else if(sum==month[i][isleap(a)])
			{
				cnt=i;
				c=sum;
				break;
			}*/	
			sum-=month[i][isleap(a)];
		} 
		printf("%04d-%02d-%02d\n",a,cnt,c);
	}
	return 0;
}
