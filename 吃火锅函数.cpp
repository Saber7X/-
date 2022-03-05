#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	string ans="chi1 huo3 guo1";
	int res=0,sum=0,cnt=0,b=0;//第一个出现的
	while(1)
	{
		getline(cin,s);
		if(s.length()==1&&s[0]=='.')
		{
			break;
		}else{
			sum++;
			for(int i=0;i<s.length();i++)
			{
				if(s[i]=='c'&&s[i+1]=='h')
				{
					if(s.substr(i,14)==ans&&b==0)//该判断语句只执行一次 
					{
						res=sum;
						b=1;//执行一次后改变b的状态 
					} 
					if(s.substr(i,14)==ans)
					{
						cnt++;
						break;//一行只需要找一个 
					} 
				}
			}
		}
		
	 } 
	 if(b==1)
	{
		cout<<sum<<endl<<res<<" "<<cnt; 
	}
	if(b==0)
	{
		cout<<sum<<endl<<"-_-#";
	}
	return 0;
}
