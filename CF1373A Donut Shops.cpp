#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	double a,b,c,flag1,flag2;
	while(t--)
	{
		cin>>a>>b>>c;
		flag1=a;flag2=c/b;
		if(flag1<flag2)//���A�ĵ��۵���B�ĵ��� 
		{
			cout<<"1"<<" "<<"-1"<<endl;
			continue;
		}
		if(a<c) cout<<"1"<<" ";//���a�ĵ���С��Bһ�еļ۸���ô����1��ʱ��A������� 
		else cout<<"-1"<<" ";
		if(flag1>flag2)//��A�ĵ��۸���B�ĵ��� 
		{
			cout<<(int)b<<endl; 
		}
		else
		{
			cout<<"-1"<<endl;
		}
		
	}

	return 0;
}
